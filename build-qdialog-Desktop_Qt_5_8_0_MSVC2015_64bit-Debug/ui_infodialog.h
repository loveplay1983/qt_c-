/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QLabel *info;
    QGroupBox *os_options;
    QVBoxLayout *verticalLayout;
    QRadioButton *win;
    QRadioButton *mac;
    QRadioButton *linux;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *pos;
    QLineEdit *pos_lineedit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *ok;
    QPushButton *cancel;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName(QStringLiteral("InfoDialog"));
        InfoDialog->resize(383, 262);
        info = new QLabel(InfoDialog);
        info->setObjectName(QStringLiteral("info"));
        info->setGeometry(QRect(20, 10, 72, 15));
        os_options = new QGroupBox(InfoDialog);
        os_options->setObjectName(QStringLiteral("os_options"));
        os_options->setGeometry(QRect(20, 80, 181, 110));
        verticalLayout = new QVBoxLayout(os_options);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        win = new QRadioButton(os_options);
        win->setObjectName(QStringLiteral("win"));

        verticalLayout->addWidget(win);

        mac = new QRadioButton(os_options);
        mac->setObjectName(QStringLiteral("mac"));

        verticalLayout->addWidget(mac);

        linux = new QRadioButton(os_options);
        linux->setObjectName(QStringLiteral("linux"));

        verticalLayout->addWidget(linux);

        widget = new QWidget(InfoDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 40, 341, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pos = new QLabel(widget);
        pos->setObjectName(QStringLiteral("pos"));

        horizontalLayout->addWidget(pos);

        pos_lineedit = new QLineEdit(widget);
        pos_lineedit->setObjectName(QStringLiteral("pos_lineedit"));

        horizontalLayout->addWidget(pos_lineedit);

        widget1 = new QWidget(InfoDialog);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 210, 341, 30));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ok = new QPushButton(widget1);
        ok->setObjectName(QStringLiteral("ok"));

        horizontalLayout_2->addWidget(ok);

        cancel = new QPushButton(widget1);
        cancel->setObjectName(QStringLiteral("cancel"));

        horizontalLayout_2->addWidget(cancel);

        info->raise();
        pos->raise();
        os_options->raise();
        pos_lineedit->raise();
        pos_lineedit->raise();
        pos->raise();
        ok->raise();
        cancel->raise();

        retranslateUi(InfoDialog);

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QApplication::translate("InfoDialog", "Dialog", Q_NULLPTR));
        info->setText(QApplication::translate("InfoDialog", "Info", Q_NULLPTR));
        os_options->setTitle(QApplication::translate("InfoDialog", "Favourite OS", Q_NULLPTR));
        win->setText(QApplication::translate("InfoDialog", "Windows", Q_NULLPTR));
        mac->setText(QApplication::translate("InfoDialog", "Mac", Q_NULLPTR));
        linux->setText(QApplication::translate("InfoDialog", "Linux", Q_NULLPTR));
        pos->setText(QApplication::translate("InfoDialog", "Position", Q_NULLPTR));
        ok->setText(QApplication::translate("InfoDialog", "Ok", Q_NULLPTR));
        cancel->setText(QApplication::translate("InfoDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
