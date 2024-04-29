#ifndef FACTORYMANAGE_H
#define FACTORYMANAGE_H

#include "CAddSensorDialog.h"
#include "CTableSQLite.h"
#include <QWidget>
#include <QStandardItemModel>
#include <QMenu>

QT_BEGIN_NAMESPACE
namespace Ui {
class factoryManage;
}
QT_END_NAMESPACE

class factoryManage : public QWidget
{
    Q_OBJECT

public:
    factoryManage(QWidget *parent = nullptr);
    ~factoryManage();

    bool addToModel(CTableData &tablelist);

private slots:
    void on_addButton_clicked();
    //添加信息槽函数
    bool slot_addSensorData(CTableData &sensorData);
    //修改信息槽函数
    bool slot_updateSensorData(CTableData &sensorData);
    //全选槽函数
    bool slot_itemChanged(QStandardItem *item);
    //右键菜单槽函数
    bool slot_rightMenu(const QPoint &pos);
    bool slot_actUpdate();
    bool slot_actDelete();


    void on_checkBox_clicked(bool checked);

    void on_delButton_clicked();

    void on_udtButton_clicked();

    void on_pushButton_clicked();

private:
    void preUI();
    void initUI();

    Ui::factoryManage *ui;
    CTableSQLite *DBSource;   //初始数据库
    QStandardItemModel *standardModel; //model
    CAddSensorDialog *addSensor; //添加传感器窗口
    QMenu *rightMenu; //右键菜单
    QAction *actUpdate;
    QAction *actDelete;
};
#endif // FACTORYMANAGE_H
