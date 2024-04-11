#include "factorymanage.h"
#include "ui_factorymanage.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>

factoryManage::factoryManage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::factoryManage)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString db_dir = QCoreApplication::applicationDirPath() + QString("/factory.db");
    qDebug() << db_dir;
    db.setDatabaseName(db_dir);
    if (!db.open()) {
        qDebug() << "error:" << db.lastError().text();
    }
    else {
        qDebug() << "connected";
    }

    QSqlQuery query;
    qDebug() << query.exec("select * from sensor");
    while(query.next()) {
        qDebug() << query.value(0).toInt()
                 << query.value(1)
                 << query.value("equip")
                 << query.value("buytime");
    }
    db.close();
}

factoryManage::~factoryManage()
{
    delete ui;
}
