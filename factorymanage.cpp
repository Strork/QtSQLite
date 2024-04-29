#include "factorymanage.h"
#include "ui_factorymanage.h"
#include "CAddSensorDialog.h"
#include <QMessageBox>
#include <QDebug>

factoryManage::factoryManage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::factoryManage)
    , DBSource(NULL)
    , standardModel(NULL)
    , addSensor(NULL)
    , rightMenu(NULL)
    , actUpdate(NULL)
    , actDelete(NULL)
{
    ui->setupUi(this);

    qRegisterMetaType<CTableData>("CTableData");
    qRegisterMetaType<CTableData>("CTableData&");

    DBSource = new CTableSQLite;
    addSensor = new CAddSensorDialog(this);

    //实例化
    preUI();

    //初始化界面
    initUI();

    //关联槽函数
    connect(addSensor,&CAddSensorDialog::sig_addSensor,this,&factoryManage::slot_addSensorData);
    connect(addSensor,&CAddSensorDialog::sig_updateSensor,this,&factoryManage::slot_updateSensorData);


}

factoryManage::~factoryManage()
{
    delete DBSource;
    delete ui;
}

bool factoryManage::addToModel(CTableData &tablelist)
{
    QStandardItem *itemID = new QStandardItem(QString::number(tablelist.getId()));
    itemID->setCheckable(true);
    QStandardItem *itemName = new QStandardItem(tablelist.getName());
    QStandardItem *itemSID = new QStandardItem(QString::number(tablelist.getSecond_id()));
    QStandardItem *itemBuyday = new QStandardItem(tablelist.getBuyday());

    QList<QStandardItem*> itemRow;
    itemRow.append(itemID);
    itemRow.append(itemName);
    itemRow.append(itemSID);
    itemRow.append(itemBuyday);
    for (auto i : itemRow) i->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    standardModel -> appendRow(itemRow);
    return true;
}

void factoryManage::preUI()
{
    //实例化model
    standardModel = new QStandardItemModel(this);
    connect(standardModel, &QStandardItemModel::itemChanged, this, &factoryManage::slot_itemChanged);

    //添加表头
    QStringList headerlist;
    headerlist << "传感器编号" << "传感器名称" << "关联设备" << "购买日期";
    standardModel->setHorizontalHeaderLabels(headerlist);
    ui->DataInfo->verticalHeader()->setVisible(false);//隐藏行号
    ui->DataInfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->DataInfo->setModel(standardModel);
    for (int i=0; i<4; ++i)
    {
        ui->DataInfo->setColumnWidth(i,width()/4-21);
    }

    //实例化右键菜单
    rightMenu = new QMenu(this);
    actUpdate = new QAction("修改",rightMenu);
    actDelete = new QAction("删除",rightMenu);
    rightMenu->addAction(actUpdate);
    rightMenu->addAction(actDelete);

    //设置右键菜单策略
    ui->DataInfo->setContextMenuPolicy(Qt::CustomContextMenu);

    //查询复选框
    ui->comboBox->addItem("传感器编号");
    ui->comboBox->addItem("传感器名称");
    ui->comboBox->addItem("安装设备号");
    ui->comboBox->addItem("日期");

    //关联槽函数
    connect(ui->DataInfo, &QTableView::customContextMenuRequested, this, &factoryManage::slot_rightMenu);
    connect(actUpdate,&QAction::triggered,this,&factoryManage::slot_actUpdate);
    connect(actDelete,&QAction::triggered,this,&factoryManage::slot_actDelete);
}

void factoryManage::initUI()
{
    //select data
    QList<CTableData> tablelist;
    bool f = DBSource -> selectData(tablelist);
    if (!f)
    {
        QMessageBox::information(this, "错误", "查询失败");
        return;
    }
    standardModel->removeRows(0,standardModel->rowCount());
    for (auto i : tablelist) addToModel(i);
}

void factoryManage::on_addButton_clicked()
{
    addSensor->setIsUpdate(false);
    addSensor->show();
}

bool factoryManage::slot_addSensorData(CTableData &sensorData)
{
    bool f = DBSource->addData(sensorData);
    if (!f) {
        QMessageBox::information(this, "错误", "插入数据失败");

        return false;
    }
    initUI();//重新加载数据库
    /*int n = standardModel->rowCount();
    sensorData.setId(standardModel->item(n-1)->text().toInt()+1);
    addToModel(sensorData);*/
    return true;
}

bool factoryManage::slot_updateSensorData(CTableData &sensorData)
{
    bool f = DBSource->updateData(sensorData);
    if (!f) {
        QMessageBox::information(this,"提示","修改失败");
        return false;
    }

    int row = ui->DataInfo->currentIndex().row();
    standardModel->setData(standardModel->item(row,1)->index(),sensorData.getName());
    standardModel->setData(standardModel->item(row,2)->index(),sensorData.getSecond_id());
    standardModel->setData(standardModel->item(row,3)->index(),sensorData.getBuyday());
    QMessageBox::information(this,"提示","修改成功");
    return true;
}

bool factoryManage::slot_itemChanged(QStandardItem *item)
{
    if (standardModel->indexFromItem(item).column() > 0) return false;
    int n = standardModel->rowCount();
    for (int i = 0; i < n; ++i) {
        if (standardModel->item(i)->checkState()!=Qt::Checked)
        {
            ui->checkBox->setChecked(false);
            return false;
        }
    }
    ui->checkBox->setCheckState(Qt::Checked);
    return true;
}

bool factoryManage::slot_rightMenu(const QPoint &pos)
{
    if (standardModel->itemFromIndex(ui->DataInfo->indexAt(pos)) != NULL) {
        rightMenu->exec(QCursor::pos());
    }
    return true;
}

bool factoryManage::slot_actUpdate()
{
    addSensor->setIsUpdate(true);
    int row = ui->DataInfo->currentIndex().row();
    int id = standardModel->item(row,0)->text().toInt();
    QString name = standardModel->item(row,1)->text();
    int sid = standardModel->item(row,2)->text().toInt();
    addSensor->displayData(name, sid);
    addSensor->setUpdateID(id);
    addSensor->show();
    return true;
}

bool factoryManage::slot_actDelete()
{
    //QModelIndex index = ui->DataInfo->currentIndex();
    int row = ui->DataInfo->currentIndex().row();
    int id = standardModel->item(row)->text().toInt();
    DBSource->deleteData(id);
    initUI();
    return true;
}

void factoryManage::on_checkBox_clicked(bool checked)
{
    int n = standardModel->rowCount();
    for (int i = 0; i < n; ++i) {
        if (checked) standardModel->item(i)->setCheckState(Qt::Checked);
        else standardModel->item(i)->setCheckState(Qt::Unchecked);
    }
}


void factoryManage::on_delButton_clicked()
{
    int n = standardModel->rowCount();
    QMap<int, QStandardItem*> delMap;
    //勾选的数据
    for (int i = 0; i < n; ++i)
    {
        if (standardModel->item(i)->checkState() == Qt::Checked) {
            delMap.insert(i,standardModel->item(i));
        }
    }
    if(delMap.size() < 1) return;

    int f = QMessageBox::information(this,"警告","是否要删除所选数据",QMessageBox::Yes|QMessageBox::No);
    if (f == QMessageBox::No) return;

    //删除数据库数据,并更新窗口
    QList<int> vid = delMap.keys();
    for (int key = vid.size()-1; key >=0; --key) {
        DBSource->deleteData(delMap.value(vid[key])->text().toInt());
    }
    initUI();
}


void factoryManage::on_udtButton_clicked()
{
    bool checkEmpty = ui->editSelect->text().isEmpty();
    if (checkEmpty) return;
    //select data
    QList<CTableData> tablelist;
    QString column;
    //查询复选框
    if (ui->comboBox->currentText() == "传感器编号") column = "id";
    if (ui->comboBox->currentText() == "传感器名称") column = "name";
    if (ui->comboBox->currentText() == "安装设备号") column = "equip_id";
    if (ui->comboBox->currentText() == "日期") column = "buyday";
    bool f = DBSource -> selectData(tablelist, column, ui->editSelect->text());
    if (!f)
    {
        QMessageBox::information(this, "错误", "查询失败");
        return;
    }
    //standardModel->clear();
    standardModel->removeRows(0,standardModel->rowCount());
    for (auto i : tablelist) addToModel(i);
}


void factoryManage::on_pushButton_clicked()
{
    initUI();
}

