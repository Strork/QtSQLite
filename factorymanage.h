#ifndef FACTORYMANAGE_H
#define FACTORYMANAGE_H

#include <QWidget>

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

private:
    Ui::factoryManage *ui;
};
#endif // FACTORYMANAGE_H
