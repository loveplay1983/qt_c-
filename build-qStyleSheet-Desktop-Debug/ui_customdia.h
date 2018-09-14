/********************************************************************************
** Form generated from reading UI file 'customdia.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMDIA_H
#define UI_CUSTOMDIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_customDia
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *diaTextEdit;
    QPushButton *diaBtn;
    QPushButton *pushButton;

    void setupUi(QDialog *customDia)
    {
        if (customDia->objectName().isEmpty())
            customDia->setObjectName(QStringLiteral("customDia"));
        customDia->resize(400, 356);
        verticalLayout = new QVBoxLayout(customDia);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        diaTextEdit = new QTextEdit(customDia);
        diaTextEdit->setObjectName(QStringLiteral("diaTextEdit"));

        verticalLayout->addWidget(diaTextEdit);

        diaBtn = new QPushButton(customDia);
        diaBtn->setObjectName(QStringLiteral("diaBtn"));

        verticalLayout->addWidget(diaBtn);

        pushButton = new QPushButton(customDia);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(customDia);

        QMetaObject::connectSlotsByName(customDia);
    } // setupUi

    void retranslateUi(QDialog *customDia)
    {
        customDia->setWindowTitle(QApplication::translate("customDia", "Dialog", 0));
        diaBtn->setText(QApplication::translate("customDia", "Confirm", 0));
        pushButton->setText(QApplication::translate("customDia", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class customDia: public Ui_customDia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMDIA_H
