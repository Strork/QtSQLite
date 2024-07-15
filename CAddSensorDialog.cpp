#include "CAddSensorDialog.h"
#include "ui_CAddSensorDialog.h"
#include "CTableData.h"
#include <QMessageBox>
#include <QDateTime>

CAddSensorDialog::CAddSensorDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CAddSensorDialog)
    , isUpdate(false)
{
    ui->setupUi(this);
    initUI();
}

CAddSensorDialog::~CAddSensorDialog()
{
    clearData();
    delete ui;
}

bool CAddSensorDialog::clearData()
{
    ui->editName->clear();
    ui->editSID->clear();
    return true;
}

bool CAddSensorDialog::displayData(QString name, int sid)
{
    ui->editName->setText(name);
    ui->editSID->setText(QString::number(sid));
    QDateTime dateTime = QDateTime::currentDateTime();
    ui->editYear->setValue(dateTime.toString("yyyy").toInt());
    ui->editMonth->setValue(dateTime.toString("MM").toInt());
    ui->editDay->setValue(dateTime.toString("dd").toInt());
    return true;
}

void CAddSensorDialog::initUI()
{
    this->setWindowTitle("添加/修改信息");
    //设置取值范围
    //任意整数，含负数  \\d表示一位数字  {1,}表示数字至少一位，多位不限
    //^-表示开头必须是负号。 -?表示负号的个数可以是0个或者一个 故^-?合起来表示开头可以以符号开头，但最多一个符号
    /*QRegExpValidator *regInt = new QRegExpValidator(this);
    regInt->setRegExp(QRegExp(QString("^-?\\d{1,}")));*/
    QRegExp regName("^[a-zA-Z0-9\u4e00-\u9fa5]{1,}$");
    ui->editName->setValidator(new QRegExpValidator(regName,this));
    ui->editSID->setValidator(new QIntValidator(0,99999999,this));
    QDateTime dateTime = QDateTime::currentDateTime();
    QString str1 = dateTime.toString("yyyy");
    int s1 = str1.toInt();
    QString str2 = dateTime.toString("MM");
    int s2 = str2.toInt();
    QString str3 = dateTime.toString("dd");
    int s3 = str3.toInt();
    ui->editDay->setRange(1,31);
    ui->editMonth->setRange(1,12);
    ui->editYear->setRange(1950,2050);
    ui->editMonth->setValue(s2);
    ui->editYear->setValue(s1);
    ui->editDay->setValue(s3);
}

int CAddSensorDialog::getUpdateID() const
{
    return updateID;
}

void CAddSensorDialog::setUpdateID(int newUpdateID)
{
    updateID = newUpdateID;
}

bool CAddSensorDialog::getIsUpdate() const
{
    return isUpdate;
}

void CAddSensorDialog::setIsUpdate(bool newIsUpdate)
{
    isUpdate = newIsUpdate;
}


void CAddSensorDialog::on_yesButton_clicked()
{
    //确定按钮
    int sizeName = ui->editName->text().size();
    if(sizeName <= 0 || sizeName > 20)
    {
        QMessageBox::information(this, "错误", "未输入名称，或名称过长");
        return;
    }
    QString sensorName = ui->editName->text();
    QString sensorYear = ui->editYear->text();
    int intDay = ui->editDay->text().toInt();
    QString sensorDay = intDay < 10 ? "0" + QString::number(intDay) : QString::number(intDay);
    int intMonth = ui->editMonth->text().toInt();
    QString sensorMonth = intMonth < 10 ? "0" + QString::number(intMonth) : QString::number(intMonth);
    int sID = ui->editSID->text().toInt();
    QString sensorTime = sensorYear + "-" + sensorMonth + "-" + sensorDay;
    CTableData sensorData;
    sensorData.setData(this->updateID, sensorName, sID, sensorTime);

    if (isUpdate) emit sig_updateSensor(sensorData);
    else {
        emit sig_addSensor(sensorData);
        //清空数据
        clearData();
    }
}


void CAddSensorDialog::on_noButton_clicked()
{
    clearData();
    this->close();
}

