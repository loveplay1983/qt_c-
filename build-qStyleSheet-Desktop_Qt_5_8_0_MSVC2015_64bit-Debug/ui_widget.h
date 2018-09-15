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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *click;
    QLabel *ui;
    QLabel *code;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(599, 300);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        click = new QPushButton(Widget);
        click->setObjectName(QStringLiteral("click"));

        verticalLayout->addWidget(click);

        ui = new QLabel(Widget);
        ui->setObjectName(QStringLiteral("ui"));
        QFont font;
        font.setPointSize(16);
        font.setItalic(true);
        ui->setFont(font);
        ui->setStyleSheet(QLatin1String("background-color: rgb(213, 255, 165);\n"
"color: rgb(12, 68, 255);"));

        verticalLayout->addWidget(ui);

        code = new QLabel(Widget);
        code->setObjectName(QStringLiteral("code"));
        code->setFont(font);

        verticalLayout->addWidget(code);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        click->setText(QApplication::translate("Widget", "Click", Q_NULLPTR));
        ui->setText(QApplication::translate("Widget", "Ui text", Q_NULLPTR));
        code->setText(QApplication::translate("Widget", "Code text", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
