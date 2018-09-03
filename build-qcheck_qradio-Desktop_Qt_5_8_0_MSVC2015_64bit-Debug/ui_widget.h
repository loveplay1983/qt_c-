/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *windows;
    QCheckBox *linux;
    QCheckBox *mac;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *bear;
    QCheckBox *juice;
    QCheckBox *coffee;
    QGroupBox *groupBox_3;
    QRadioButton *C;
    QRadioButton *A;
    QRadioButton *B;
    QPushButton *all_drink;
    QPushButton *quit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(665, 494);
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        windows = new QCheckBox(groupBox);
        windows->setObjectName(QStringLiteral("windows"));

        verticalLayout->addWidget(windows);

        linux = new QCheckBox(groupBox);
        linux->setObjectName(QStringLiteral("linux"));

        verticalLayout->addWidget(linux);

        mac = new QCheckBox(groupBox);
        mac->setObjectName(QStringLiteral("mac"));

        verticalLayout->addWidget(mac);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        bear = new QCheckBox(groupBox_2);
        bear->setObjectName(QStringLiteral("bear"));

        verticalLayout_2->addWidget(bear);

        juice = new QCheckBox(groupBox_2);
        juice->setObjectName(QStringLiteral("juice"));

        verticalLayout_2->addWidget(juice);

        coffee = new QCheckBox(groupBox_2);
        coffee->setObjectName(QStringLiteral("coffee"));

        verticalLayout_2->addWidget(coffee);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        C = new QRadioButton(groupBox_3);
        C->setObjectName(QStringLiteral("C"));
        C->setGeometry(QRect(40, 120, 117, 21));
        A = new QRadioButton(groupBox_3);
        A->setObjectName(QStringLiteral("A"));
        A->setGeometry(QRect(40, 40, 117, 21));
        B = new QRadioButton(groupBox_3);
        B->setObjectName(QStringLiteral("B"));
        B->setGeometry(QRect(40, 80, 117, 21));

        verticalLayout_3->addWidget(groupBox_3);

        all_drink = new QPushButton(Widget);
        all_drink->setObjectName(QStringLiteral("all_drink"));

        verticalLayout_3->addWidget(all_drink);

        quit = new QPushButton(Widget);
        quit->setObjectName(QStringLiteral("quit"));

        verticalLayout_3->addWidget(quit);

        all_drink->raise();
        groupBox_3->raise();
        quit->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "Choose OS(Exclusive)", Q_NULLPTR));
        windows->setText(QApplication::translate("Widget", "windows", Q_NULLPTR));
        linux->setText(QApplication::translate("Widget", "linux", Q_NULLPTR));
        mac->setText(QApplication::translate("Widget", "mac", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "Choose Drink(Non Exclusive)", Q_NULLPTR));
        bear->setText(QApplication::translate("Widget", "bear", Q_NULLPTR));
        juice->setText(QApplication::translate("Widget", "juice", Q_NULLPTR));
        coffee->setText(QApplication::translate("Widget", "coffee", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Widget", "Choose Answer", Q_NULLPTR));
        C->setText(QApplication::translate("Widget", "C", Q_NULLPTR));
        A->setText(QApplication::translate("Widget", "A", Q_NULLPTR));
        B->setText(QApplication::translate("Widget", "B", Q_NULLPTR));
        all_drink->setText(QApplication::translate("Widget", "Choose all Drink", Q_NULLPTR));
        quit->setText(QApplication::translate("Widget", "quit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
