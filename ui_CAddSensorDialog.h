/********************************************************************************
** Form generated from reading UI file 'CAddSensorDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADDSENSORDIALOG_H
#define UI_CADDSENSORDIALOG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CAddSensorDialog
{
public:
    QPushButton *yesButton;
    QPushButton *noButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QSpinBox *editYear;
    QLabel *label_4;
    QSpinBox *editMonth;
    QLabel *label_5;
    QSpinBox *editDay;
    QLabel *label_6;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *editName;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *editSID;

    void setupUi(QDialog *CAddSensorDialog)
    {
        if (CAddSensorDialog->objectName().isEmpty())
            CAddSensorDialog->setObjectName(QStringLiteral("CAddSensorDialog"));
        CAddSensorDialog->resize(373, 231);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CAddSensorDialog->sizePolicy().hasHeightForWidth());
        CAddSensorDialog->setSizePolicy(sizePolicy);
        yesButton = new QPushButton(CAddSensorDialog);
        yesButton->setObjectName(QStringLiteral("yesButton"));
        yesButton->setGeometry(QRect(39, 177, 81, 31));
        noButton = new QPushButton(CAddSensorDialog);
        noButton->setObjectName(QStringLiteral("noButton"));
        noButton->setGeometry(QRect(249, 177, 81, 31));
        layoutWidget = new QWidget(CAddSensorDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(39, 127, 291, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        editYear = new QSpinBox(layoutWidget);
        editYear->setObjectName(QStringLiteral("editYear"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editYear->sizePolicy().hasHeightForWidth());
        editYear->setSizePolicy(sizePolicy1);
        editYear->setMinimumSize(QSize(50, 0));
        editYear->setMaximumSize(QSize(50, 16777215));
        editYear->setButtonSymbols(QAbstractSpinBox::NoButtons);
        editYear->setValue(19);

        horizontalLayout->addWidget(editYear);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        editMonth = new QSpinBox(layoutWidget);
        editMonth->setObjectName(QStringLiteral("editMonth"));
        editMonth->setMinimumSize(QSize(30, 0));
        editMonth->setMaximumSize(QSize(30, 16777215));
        editMonth->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout->addWidget(editMonth);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        editDay = new QSpinBox(layoutWidget);
        editDay->setObjectName(QStringLiteral("editDay"));
        editDay->setMinimumSize(QSize(30, 0));
        editDay->setMaximumSize(QSize(30, 16777215));
        editDay->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout->addWidget(editDay);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        layoutWidget1 = new QWidget(CAddSensorDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 30, 291, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        editName = new QLineEdit(layoutWidget1);
        editName->setObjectName(QStringLiteral("editName"));

        horizontalLayout_2->addWidget(editName);

        layoutWidget2 = new QWidget(CAddSensorDialog);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(39, 77, 291, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        editSID = new QLineEdit(layoutWidget2);
        editSID->setObjectName(QStringLiteral("editSID"));

        horizontalLayout_3->addWidget(editSID);


        retranslateUi(CAddSensorDialog);

        QMetaObject::connectSlotsByName(CAddSensorDialog);
    } // setupUi

    void retranslateUi(QDialog *CAddSensorDialog)
    {
        CAddSensorDialog->setWindowTitle(QApplication::translate("CAddSensorDialog", "Dialog", Q_NULLPTR));
        yesButton->setText(QApplication::translate("CAddSensorDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        noButton->setText(QApplication::translate("CAddSensorDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        label_3->setText(QApplication::translate("CAddSensorDialog", "\344\277\256\346\224\271\346\227\245\346\234\237", Q_NULLPTR));
        label_4->setText(QApplication::translate("CAddSensorDialog", "\345\271\264", Q_NULLPTR));
        label_5->setText(QApplication::translate("CAddSensorDialog", "\346\234\210", Q_NULLPTR));
        label_6->setText(QApplication::translate("CAddSensorDialog", "\346\227\245", Q_NULLPTR));
        label->setText(QApplication::translate("CAddSensorDialog", "\345\231\250\344\273\266\345\220\215\347\247\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("CAddSensorDialog", "\345\256\211\350\243\205\350\256\276\345\244\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CAddSensorDialog: public Ui_CAddSensorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADDSENSORDIALOG_H
