/********************************************************************************
** Form generated from reading UI file 'styleselector.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STYLESELECTOR_H
#define UI_STYLESELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_styleSelector
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *ok;
    QPushButton *cancel;

    void setupUi(QDialog *styleSelector)
    {
        if (styleSelector->objectName().isEmpty())
            styleSelector->setObjectName(QStringLiteral("styleSelector"));
        styleSelector->resize(420, 207);
        verticalLayout = new QVBoxLayout(styleSelector);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(styleSelector);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(16);
        font.setItalic(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ok = new QPushButton(styleSelector);
        ok->setObjectName(QStringLiteral("ok"));

        horizontalLayout->addWidget(ok);

        cancel = new QPushButton(styleSelector);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout->addWidget(cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(styleSelector);

        QMetaObject::connectSlotsByName(styleSelector);
    } // setupUi

    void retranslateUi(QDialog *styleSelector)
    {
        styleSelector->setWindowTitle(QApplication::translate("styleSelector", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("styleSelector", "Are you sure????", Q_NULLPTR));
        ok->setText(QApplication::translate("styleSelector", "ok", Q_NULLPTR));
        cancel->setText(QApplication::translate("styleSelector", "cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class styleSelector: public Ui_styleSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STYLESELECTOR_H
