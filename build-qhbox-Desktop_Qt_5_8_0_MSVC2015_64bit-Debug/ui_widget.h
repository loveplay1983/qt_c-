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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(634, 342);
        horizontalLayout_2 = new QHBoxLayout(Widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn1 = new QPushButton(Widget);
        btn1->setObjectName(QStringLiteral("btn1"));

        horizontalLayout->addWidget(btn1);

        btn2 = new QPushButton(Widget);
        btn2->setObjectName(QStringLiteral("btn2"));

        horizontalLayout->addWidget(btn2);

        btn3 = new QPushButton(Widget);
        btn3->setObjectName(QStringLiteral("btn3"));

        horizontalLayout->addWidget(btn3);

        btn4 = new QPushButton(Widget);
        btn4->setObjectName(QStringLiteral("btn4"));

        horizontalLayout->addWidget(btn4);

        btn5 = new QPushButton(Widget);
        btn5->setObjectName(QStringLiteral("btn5"));

        horizontalLayout->addWidget(btn5);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        btn1->setText(QApplication::translate("Widget", "One", Q_NULLPTR));
        btn2->setText(QApplication::translate("Widget", "Two", Q_NULLPTR));
        btn3->setText(QApplication::translate("Widget", "Three", Q_NULLPTR));
        btn4->setText(QApplication::translate("Widget", "Four", Q_NULLPTR));
        btn5->setText(QApplication::translate("Widget", "Five", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
