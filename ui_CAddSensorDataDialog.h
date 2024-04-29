/********************************************************************************
** Form generated from reading UI file 'CAddSensorDataDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADDSENSORDATADIALOG_H
#define UI_CADDSENSORDATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CAddSensorDataDialog
{
public:
    QPushButton *buttonYes;
    QPushButton *buttonNo;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *editName;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *editSID;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *editYear;
    QLabel *label_4;
    QSpinBox *editMonth;
    QLabel *label_5;
    QSpinBox *editDay;
    QLabel *label_6;

    void setupUi(QDialog *CAddSensorDataDialog)
    {
        if (CAddSensorDataDialog->objectName().isEmpty())
            CAddSensorDataDialog->setObjectName(QStringLiteral("CAddSensorDataDialog"));
        CAddSensorDataDialog->resize(327, 210);
        buttonYes = new QPushButton(CAddSensorDataDialog);
        buttonYes->setObjectName(QStringLiteral("buttonYes"));
        buttonYes->setGeometry(QRect(60, 170, 80, 18));
        buttonNo = new QPushButton(CAddSensorDataDialog);
        buttonNo->setObjectName(QStringLiteral("buttonNo"));
        buttonNo->setGeometry(QRect(190, 170, 80, 18));
        widget = new QWidget(CAddSensorDataDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 20, 211, 25));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        editName = new QLineEdit(widget);
        editName->setObjectName(QStringLiteral("editName"));

        horizontalLayout_3->addWidget(editName);

        widget1 = new QWidget(CAddSensorDataDialog);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(60, 70, 211, 25));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        editSID = new QLineEdit(widget1);
        editSID->setObjectName(QStringLiteral("editSID"));

        horizontalLayout_2->addWidget(editSID);

        widget2 = new QWidget(CAddSensorDataDialog);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(60, 120, 212, 26));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        editYear = new QSpinBox(widget2);
        editYear->setObjectName(QStringLiteral("editYear"));

        horizontalLayout->addWidget(editYear);

        label_4 = new QLabel(widget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        editMonth = new QSpinBox(widget2);
        editMonth->setObjectName(QStringLiteral("editMonth"));

        horizontalLayout->addWidget(editMonth);

        label_5 = new QLabel(widget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        editDay = new QSpinBox(widget2);
        editDay->setObjectName(QStringLiteral("editDay"));

        horizontalLayout->addWidget(editDay);

        label_6 = new QLabel(widget2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);


        retranslateUi(CAddSensorDataDialog);

        QMetaObject::connectSlotsByName(CAddSensorDataDialog);
    } // setupUi

    void retranslateUi(QDialog *CAddSensorDataDialog)
    {
        CAddSensorDataDialog->setWindowTitle(QApplication::translate("CAddSensorDataDialog", "Dialog", Q_NULLPTR));
        buttonYes->setText(QApplication::translate("CAddSensorDataDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        buttonNo->setText(QApplication::translate("CAddSensorDataDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("CAddSensorDataDialog", "\345\231\250\344\273\266\345\220\215\347\247\260", Q_NULLPTR));
        editName->setText(QString());
        label_2->setText(QApplication::translate("CAddSensorDataDialog", "\345\256\211\350\243\205\347\274\226\345\217\267", Q_NULLPTR));
        editSID->setText(QString());
        label_3->setText(QApplication::translate("CAddSensorDataDialog", "\346\227\245\346\234\237", Q_NULLPTR));
        label_4->setText(QApplication::translate("CAddSensorDataDialog", "\345\271\264", Q_NULLPTR));
        label_5->setText(QApplication::translate("CAddSensorDataDialog", "\346\234\210", Q_NULLPTR));
        label_6->setText(QApplication::translate("CAddSensorDataDialog", "\346\227\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
class CAddSensorDataDialog: public Ui_CAddSprivate slots:
                                                            void on_buttonYes_clicked();
CAddSensorDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADDSENSORDATADIALOG_H
