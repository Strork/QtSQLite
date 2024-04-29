#ifndef CADDSENSORDIALOG_H
#define CADDSENSORDIALOG_H

#include <CTableData.h>
#include <QDialog>

namespace Ui {
class CAddSensorDialog;
}

class CAddSensorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CAddSensorDialog(QWidget *parent = nullptr);
    ~CAddSensorDialog();

    bool clearData();
    bool displayData(QString name, int sid);

    bool getIsUpdate() const;
    void setIsUpdate(bool newIsUpdate);

    int getUpdateID() const;
    void setUpdateID(int newUpdateID);

signals:
    void sig_addSensor(CTableData &sensorData);
    void sig_updateSensor(CTableData &sensorData);

private slots:
    void on_yesButton_clicked();

    void on_noButton_clicked();

private:
    void initUI();
    Ui::CAddSensorDialog *ui;
    bool isUpdate; //是否是修改信息的标志
    int updateID;
};

#endif // CADDSENSORDIALOG_H
