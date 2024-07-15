#include "CTableSQLite.h"
#include <QDebug>
#include <QCoreApplication>
#include <QSqlError>
#include <QSqlQuery>

CTableSQLite::CTableSQLite()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./factory.db");
    if (!db.open()) {
        qDebug() << "connect error:" << db.lastError().text();
        return;
    }
    QSqlQuery query;
    QString sensor = QString("CREATE TABLE IF NOT EXISTS sensor(id INTEGER PRIMARY KEY AUTOINCREMENT,"
                             "name VARCHAR (64),"
                             "equip_id INT DEFAULT (0),"
                             "buyday DATE);");
    if(!query.exec(sensor)) {
        qDebug() << "Field to create table";
        qDebug() << db.lastError().text();
        db.close();
        return;
    }
    db.close();
}

CTableSQLite::~CTableSQLite()
{

}

bool CTableSQLite::selectData(QList<CTableData> &tableDataList)
{
    if (!db.open()) {
        qDebug() << "Fail at open database : selectData";
        db.close();
        return false;
    }
    QSqlQuery query;
    QString sql = "select * from sensor";
    if (!query.exec(sql))
    {
        qDebug() << "fail at select table";
        db.close();
        return false;
    }
    while (query.next())
    {
        CTableData tableData;
        int id = query.value(0).toInt();
        QString name = query.value(1).toString();
        int sid = query.value(2).toInt();
        QString buytime = query.value(3).toString();
        tableData.setData(id, name, sid, buytime);
        tableDataList.append(tableData);
    }
    db.close();
    return true;
}

bool CTableSQLite::selectData(QList<CTableData> &tableDataList, QString column, QString value)
{
    if (!db.open()) {
        qDebug() << "Fail at open database : selectData column value";
        db.close();
        return false;
    }
    QSqlQuery query;
    QString sql = QString("select * from sensor where %1=%2").arg(column,value);
    if (column == "name" || column == "buyday")
        sql = QString("select * from sensor where %1='%2'").arg(column,value);
    qDebug() << sql;
    if (!query.exec(sql))
    {
        qDebug() << "fail at select table";
        db.close();
        return false;
    }
    while (query.next())
    {
        CTableData tableData;
        int id = query.value(0).toInt();
        QString name = query.value(1).toString();
        int sid = query.value(2).toInt();
        QString buytime = query.value(3).toString();
        tableData.setData(id, name, sid, buytime);
        tableDataList.append(tableData);
    }
    db.close();
    return true;
}

bool CTableSQLite::addData(CTableData &tableData)
{
    if (!db.open()) {
        qDebug() << "Fail at open database : addData";
        db.close();
        return false;
    }
    QSqlQuery query;
    query.prepare("insert into sensor (name,equip_id,buyday)"
                  "values(:name,:equip_id,:buyday)");
    query.bindValue(":name",tableData.getName());
    query.bindValue(":equip_id",tableData.getSecond_id());
    query.bindValue(":buyday",tableData.getBuyday());
    if (!query.exec()) {
        qDebug() << query.lastError().text();
        db.close();
        return false;
    }
    db.close();
    return true;
}

bool CTableSQLite::updateData(CTableData &tableData)
{
    if (!db.open()) {
        qDebug() << "Fail at open database : updateData";
        db.close();
        return false;
    }
    QSqlQuery query;
    QString numID = QString::number(tableData.getId());
    QString sql = QString("update sensor set name='%1' where id=%2").
                  arg(tableData.getName(),numID);
    if (!query.exec(sql)) {
        qDebug() << "Fail at update name";
        qDebug() << "sql error is:" << query.lastError().text();
        return false;
    }
    sql = QString("update sensor set equip_id=%1 where id=%2").
          arg(QString::number(tableData.getSecond_id()),numID);
    if (!query.exec(sql)) {
        qDebug() << "Fail at update sid";
        qDebug() << "sql error is:" << query.lastError().text();
        return false;
    }
    sql = QString("update sensor set buyday='%1' where id=%2").
          arg(tableData.getBuyday(),numID);
    if (!query.exec(sql)) {
        qDebug() << "Fail at update buyday";
        qDebug() << "sql error is:" << query.lastError().text();
        return false;
    }
    db.close();
    return true;
}

bool CTableSQLite::deleteData(int id)
{
    if (!db.open()) {
        qDebug() << "Fail at open database : delData";
        db.close();
        return false;
    }
    QSqlQuery query;
    QString sql = QString("delete from sensor where id = %1").arg(id);
    if (!query.exec(sql)) {
        qDebug() << "Fail to delete data";
        db.close();
        return false;
    }
    sql = QString("update sensor set 'id'=(id-1) where id > %1").arg(id);
    if (!query.exec(sql)) {
        qDebug() << "Fail to update id";
        db.close();
        return false;
    }
    sql = QString("delete from sqlite_sequence where name = 'sensor'");
    if (!query.exec(sql)) {
        qDebug() << "Fail to reset auto-id";
        db.close();
        return false;
    }
    db.close();
    return true;
}
