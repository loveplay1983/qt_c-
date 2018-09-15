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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *firstname;
    QLineEdit *fnLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lastname;
    QLineEdit *lnLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *profession;
    QLineEdit *professionLineEdit;
    QPushButton *submit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(459, 267);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        firstname = new QLabel(Widget);
        firstname->setObjectName(QStringLiteral("firstname"));

        horizontalLayout->addWidget(firstname);

        fnLineEdit = new QLineEdit(Widget);
        fnLineEdit->setObjectName(QStringLiteral("fnLineEdit"));

        horizontalLayout->addWidget(fnLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lastname = new QLabel(Widget);
        lastname->setObjectName(QStringLiteral("lastname"));

        horizontalLayout_2->addWidget(lastname);

        lnLineEdit = new QLineEdit(Widget);
        lnLineEdit->setObjectName(QStringLiteral("lnLineEdit"));

        horizontalLayout_2->addWidget(lnLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        profession = new QLabel(Widget);
        profession->setObjectName(QStringLiteral("profession"));

        horizontalLayout_3->addWidget(profession);

        professionLineEdit = new QLineEdit(Widget);
        professionLineEdit->setObjectName(QStringLiteral("professionLineEdit"));

        horizontalLayout_3->addWidget(professionLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        submit = new QPushButton(Widget);
        submit->setObjectName(QStringLiteral("submit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(submit->sizePolicy().hasHeightForWidth());
        submit->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(submit);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        firstname->setText(QApplication::translate("Widget", "first name", Q_NULLPTR));
        lastname->setText(QApplication::translate("Widget", "last name", Q_NULLPTR));
        profession->setText(QApplication::translate("Widget", "profession", Q_NULLPTR));
        submit->setText(QApplication::translate("Widget", "Confirm", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
