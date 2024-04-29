#ifndef DATABASEAPI_H
#define DATABASEAPI_H

#include "CTableData.h"
#include <QString>

class dataBaseAPI
{
public:
    dataBaseAPI();
    virtual ~dataBaseAPI() = 0;

    virtual bool selectData(QList<CTableData> &sensorData) = 0;
    virtual bool addData(CTableData &sensorData) = 0;
    virtual bool updateData(CTableData &sensorData) = 0;
    virtual bool deleteData(int id) = 0;
};

#endif // DATABASEAPI_H
