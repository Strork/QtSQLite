#include "CTableData.h"

CTableData::CTableData() {}

bool CTableData::setData(int tid, QString tname, int tsecond_id, QString tbuyday)
{
    id = tid;
    name = tname;
    second_id = tsecond_id;
    buyday = tbuyday;
    return true;
}

int CTableData::getId() const
{
    return id;
}

void CTableData::setId(int newId)
{
    id = newId;
}

QString CTableData::getName() const
{
    return name;
}

void CTableData::setName(const QString &newName)
{
    name = newName;
}

int CTableData::getSecond_id() const
{
    return second_id;
}

void CTableData::setSecond_id(int newSecond_id)
{
    second_id = newSecond_id;
}

QString CTableData::getBuyday() const
{
    return buyday;
}

void CTableData::setBuyday(const QString &newBuyday)
{
    buyday = newBuyday;
}
