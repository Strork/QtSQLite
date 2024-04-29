#ifndef CTABLEDATA_H
#define CTABLEDATA_H
#include <QString>
#include <QMetaType>

class CTableData
{
public:
    CTableData();
    bool setData(int tid, QString tname, int tsecond_id, QString tbuyday);

    int getId() const;
    void setId(int newId);

    QString getName() const;
    void setName(const QString &newName);

    int getSecond_id() const;
    void setSecond_id(int newSecond_id);

    QString getBuyday() const;
    void setBuyday(const QString &newBuyday);

private:
    int id;
    QString name;
    int second_id;
    QString buyday;
};

Q_DECLARE_METATYPE(CTableData)
#endif // CTABLEDATA_H
