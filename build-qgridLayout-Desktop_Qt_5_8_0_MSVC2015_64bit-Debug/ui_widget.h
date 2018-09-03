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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn7;
    QPushButton *btn3;
    QPushButton *btn9;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(648, 430);
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(220, 160, 256, 88));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn1 = new QPushButton(widget);
        btn1->setObjectName(QStringLiteral("btn1"));

        gridLayout->addWidget(btn1, 0, 0, 1, 1);

        btn2 = new QPushButton(widget);
        btn2->setObjectName(QStringLiteral("btn2"));

        gridLayout->addWidget(btn2, 0, 1, 1, 1);

        btn4 = new QPushButton(widget);
        btn4->setObjectName(QStringLiteral("btn4"));

        gridLayout->addWidget(btn4, 1, 0, 1, 1);

        btn5 = new QPushButton(widget);
        btn5->setObjectName(QStringLiteral("btn5"));

        gridLayout->addWidget(btn5, 1, 1, 1, 1);

        btn7 = new QPushButton(widget);
        btn7->setObjectName(QStringLiteral("btn7"));

        gridLayout->addWidget(btn7, 2, 0, 1, 1);

        btn3 = new QPushButton(widget);
        btn3->setObjectName(QStringLiteral("btn3"));

        gridLayout->addWidget(btn3, 0, 2, 1, 2);

        btn9 = new QPushButton(widget);
        btn9->setObjectName(QStringLiteral("btn9"));

        gridLayout->addWidget(btn9, 2, 2, 1, 2);

        btn1->raise();
        btn2->raise();
        btn3->raise();
        btn4->raise();
        btn5->raise();
        btn7->raise();
        btn9->raise();
        btn3->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        btn1->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        btn2->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        btn4->setText(QApplication::translate("Widget", "4", Q_NULLPTR));
        btn5->setText(QApplication::translate("Widget", "5", Q_NULLPTR));
        btn7->setText(QApplication::translate("Widget", "7", Q_NULLPTR));
        btn3->setText(QApplication::translate("Widget", "3", Q_NULLPTR));
        btn9->setText(QApplication::translate("Widget", "9", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
