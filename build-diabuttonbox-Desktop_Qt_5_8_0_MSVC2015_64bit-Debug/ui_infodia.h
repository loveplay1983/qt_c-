/********************************************************************************
** Form generated from reading UI file 'infodia.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIA_H
#define UI_INFODIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_infoDia
{
public:
    QDialogButtonBox *btnBox;
    QTextEdit *textEdit;

    void setupUi(QDialog *infoDia)
    {
        if (infoDia->objectName().isEmpty())
            infoDia->setObjectName(QStringLiteral("infoDia"));
        infoDia->resize(508, 321);
        btnBox = new QDialogButtonBox(infoDia);
        btnBox->setObjectName(QStringLiteral("btnBox"));
        btnBox->setGeometry(QRect(150, 270, 193, 28));
        btnBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textEdit = new QTextEdit(infoDia);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 20, 451, 241));

        retranslateUi(infoDia);

        QMetaObject::connectSlotsByName(infoDia);
    } // setupUi

    void retranslateUi(QDialog *infoDia)
    {
        infoDia->setWindowTitle(QApplication::translate("infoDia", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class infoDia: public Ui_infoDia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIA_H
