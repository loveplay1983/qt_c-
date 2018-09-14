/********************************************************************************
** Form generated from reading UI file 'styleselector.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
    QPushButton *pushButton;
    QPushButton *pushButton_2;

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

        pushButton = new QPushButton(styleSelector);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(styleSelector);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(styleSelector);

        QMetaObject::connectSlotsByName(styleSelector);
    } // setupUi

    void retranslateUi(QDialog *styleSelector)
    {
        styleSelector->setWindowTitle(QApplication::translate("styleSelector", "Dialog", 0));
        label->setText(QApplication::translate("styleSelector", "Are you sure????", 0));
        pushButton->setText(QApplication::translate("styleSelector", "ok", 0));
        pushButton_2->setText(QApplication::translate("styleSelector", "cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class styleSelector: public Ui_styleSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STYLESELECTOR_H
