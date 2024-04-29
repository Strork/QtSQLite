#ifndef CTABLESQLITE_H
#define CTABLESQLITE_H

#include "dataBaseAPI.h"
#include <QSqlDatabase>
#include <QMessageBox>

class CTableSQLite : public dataBaseAPI
{
public:
    CTableSQLite();
    ~CTableSQLite();

    virtual bool selectData(QList<CTableData> &tableDataList) override;
    virtual bool selectData(QList<CTableData> &tableDataList, QString column, QString value);
    virtual bool addData(CTableData &tableData) override;
    virtual bool updateData(CTableData &tableData) override;
    virtual bool deleteData(int id) override;

private:
    QSqlDatabase db;
};

#endif // CTABLESQLITE_H
