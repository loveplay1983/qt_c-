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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(102, 300);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btn1 = new QPushButton(Widget);
        btn1->setObjectName(QStringLiteral("btn1"));

        verticalLayout->addWidget(btn1);

        btn2 = new QPushButton(Widget);
        btn2->setObjectName(QStringLiteral("btn2"));

        verticalLayout->addWidget(btn2);

        btn3 = new QPushButton(Widget);
        btn3->setObjectName(QStringLiteral("btn3"));

        verticalLayout->addWidget(btn3);

        btn4 = new QPushButton(Widget);
        btn4->setObjectName(QStringLiteral("btn4"));

        verticalLayout->addWidget(btn4);

        btn5 = new QPushButton(Widget);
        btn5->setObjectName(QStringLiteral("btn5"));

        verticalLayout->addWidget(btn5);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        btn1->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        btn2->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        btn3->setText(QApplication::translate("Widget", "3", Q_NULLPTR));
        btn4->setText(QApplication::translate("Widget", "4", Q_NULLPTR));
        btn5->setText(QApplication::translate("Widget", "5", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
