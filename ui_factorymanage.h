/********************************************************************************
** Form generated from reading UI file 'factorymanage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTORYMANAGE_H
#define UI_FACTORYMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_factoryManage
{
public:
    QPushButton *addButton;
    QPushButton *delButton;
    QPushButton *udtButton;
    QTableView *DataInfo;
    QCheckBox *checkBox;
    QComboBox *comboBox;
    QLineEdit *editSelect;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *editCount;

    void setupUi(QWidget *factoryManage)
    {
        if (factoryManage->objectName().isEmpty())
            factoryManage->setObjectName(QStringLiteral("factoryManage"));
        factoryManage->resize(831, 534);
        addButton = new QPushButton(factoryManage);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(40, 20, 91, 31));
        delButton = new QPushButton(factoryManage);
        delButton->setObjectName(QStringLiteral("delButton"));
        delButton->setGeometry(QRect(150, 20, 91, 31));
        udtButton = new QPushButton(factoryManage);
        udtButton->setObjectName(QStringLiteral("udtButton"));
        udtButton->setGeometry(QRect(700, 20, 91, 31));
        DataInfo = new QTableView(factoryManage);
        DataInfo->setObjectName(QStringLiteral("DataInfo"));
        DataInfo->setGeometry(QRect(40, 70, 751, 391));
        checkBox = new QCheckBox(factoryManage);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(40, 480, 81, 31));
        comboBox = new QComboBox(factoryManage);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(280, 20, 121, 31));
        editSelect = new QLineEdit(factoryManage);
        editSelect->setObjectName(QStringLiteral("editSelect"));
        editSelect->setGeometry(QRect(410, 20, 281, 31));
        pushButton = new QPushButton(factoryManage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(700, 480, 91, 31));
        widget = new QWidget(factoryManage);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(210, 480, 371, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        editCount = new QLineEdit(widget);
        editCount->setObjectName(QStringLiteral("editCount"));

        horizontalLayout->addWidget(editCount);


        retranslateUi(factoryManage);

        QMetaObject::connectSlotsByName(factoryManage);
    } // setupUi

    void retranslateUi(QWidget *factoryManage)
    {
        factoryManage->setWindowTitle(QApplication::translate("factoryManage", "\345\267\245\345\216\202\344\274\240\346\204\237\345\231\250\350\256\276\345\244\207\347\256\241\347\220\206", Q_NULLPTR));
        addButton->setText(QApplication::translate("factoryManage", "\346\267\273\345\212\240", Q_NULLPTR));
        delButton->setText(QApplication::translate("factoryManage", "\345\210\240\351\231\244", Q_NULLPTR));
        udtButton->setText(QApplication::translate("factoryManage", "\346\237\245\350\257\242", Q_NULLPTR));
        checkBox->setText(QApplication::translate("factoryManage", "\345\205\250\351\200\211", Q_NULLPTR));
        pushButton->setText(QApplication::translate("factoryManage", "\351\207\215\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("factoryManage", "\346\234\254\346\254\241\346\237\245\350\257\242\345\205\261\350\277\224\345\233\236\346\235\241\347\233\256\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class factoryManage: public Ui_factoryManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTORYMANAGE_H
