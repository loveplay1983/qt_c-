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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn9;
    QPushButton *btn8;
    QSplitter *splitter;
    QPushButton *save;
    QPushButton *load;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(447, 419);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setFrameShape(QFrame::WinPanel);
        label->setFrameShadow(QFrame::Plain);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn1 = new QPushButton(Widget);
        btn1->setObjectName(QStringLiteral("btn1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn1, 0, 0, 1, 1);

        btn2 = new QPushButton(Widget);
        btn2->setObjectName(QStringLiteral("btn2"));
        sizePolicy.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn2, 0, 1, 1, 1);

        btn3 = new QPushButton(Widget);
        btn3->setObjectName(QStringLiteral("btn3"));
        sizePolicy.setHeightForWidth(btn3->sizePolicy().hasHeightForWidth());
        btn3->setSizePolicy(sizePolicy);
        btn3->setAutoDefault(false);
        btn3->setFlat(false);

        gridLayout->addWidget(btn3, 0, 2, 1, 1);

        btn4 = new QPushButton(Widget);
        btn4->setObjectName(QStringLiteral("btn4"));
        sizePolicy.setHeightForWidth(btn4->sizePolicy().hasHeightForWidth());
        btn4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn4, 1, 0, 1, 1);

        btn5 = new QPushButton(Widget);
        btn5->setObjectName(QStringLiteral("btn5"));
        sizePolicy.setHeightForWidth(btn5->sizePolicy().hasHeightForWidth());
        btn5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn5, 1, 1, 1, 1);

        btn6 = new QPushButton(Widget);
        btn6->setObjectName(QStringLiteral("btn6"));
        sizePolicy.setHeightForWidth(btn6->sizePolicy().hasHeightForWidth());
        btn6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn6, 1, 2, 1, 1);

        btn7 = new QPushButton(Widget);
        btn7->setObjectName(QStringLiteral("btn7"));
        sizePolicy.setHeightForWidth(btn7->sizePolicy().hasHeightForWidth());
        btn7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn7, 2, 0, 1, 1);

        btn9 = new QPushButton(Widget);
        btn9->setObjectName(QStringLiteral("btn9"));
        sizePolicy.setHeightForWidth(btn9->sizePolicy().hasHeightForWidth());
        btn9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn9, 2, 2, 1, 1);

        btn8 = new QPushButton(Widget);
        btn8->setObjectName(QStringLiteral("btn8"));
        sizePolicy.setHeightForWidth(btn8->sizePolicy().hasHeightForWidth());
        btn8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn8, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        splitter = new QSplitter(Widget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        save = new QPushButton(splitter);
        save->setObjectName(QStringLiteral("save"));
        splitter->addWidget(save);
        load = new QPushButton(splitter);
        load->setObjectName(QStringLiteral("load"));
        splitter->addWidget(load);

        verticalLayout->addWidget(splitter);


        retranslateUi(Widget);

        btn3->setDefault(false);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "1. Choose one of the buttons to change color; 2. Choose save or load for future use.", Q_NULLPTR));
        btn1->setText(QApplication::translate("Widget", "one", Q_NULLPTR));
        btn2->setText(QApplication::translate("Widget", "two", Q_NULLPTR));
        btn3->setText(QApplication::translate("Widget", "three", Q_NULLPTR));
        btn4->setText(QApplication::translate("Widget", "four", Q_NULLPTR));
        btn5->setText(QApplication::translate("Widget", "five", Q_NULLPTR));
        btn6->setText(QApplication::translate("Widget", "fix", Q_NULLPTR));
        btn7->setText(QApplication::translate("Widget", "seven", Q_NULLPTR));
        btn9->setText(QApplication::translate("Widget", "nine", Q_NULLPTR));
        btn8->setText(QApplication::translate("Widget", "eight", Q_NULLPTR));
        save->setText(QApplication::translate("Widget", "save", Q_NULLPTR));
        load->setText(QApplication::translate("Widget", "load", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
