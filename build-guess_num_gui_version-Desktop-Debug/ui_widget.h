/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QSpinBox *numOption;
    QPushButton *playAgain;
    QPushButton *guessButton;
    QLabel *title;
    QLabel *result;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(447, 300);
        numOption = new QSpinBox(Widget);
        numOption->setObjectName(QStringLiteral("numOption"));
        numOption->setGeometry(QRect(180, 80, 91, 30));
        numOption->setMinimum(1);
        playAgain = new QPushButton(Widget);
        playAgain->setObjectName(QStringLiteral("playAgain"));
        playAgain->setGeometry(QRect(270, 140, 101, 30));
        guessButton = new QPushButton(Widget);
        guessButton->setObjectName(QStringLiteral("guessButton"));
        guessButton->setGeometry(QRect(100, 140, 85, 30));
        title = new QLabel(Widget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(130, 30, 211, 25));
        QFont font;
        font.setPointSize(14);
        font.setItalic(true);
        title->setFont(font);
        result = new QLabel(Widget);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(80, 170, 291, 81));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        result->setFont(font1);
        result->setAlignment(Qt::AlignCenter);
        result->setWordWrap(false);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        playAgain->setText(QApplication::translate("Widget", "Play Again", 0));
        guessButton->setText(QApplication::translate("Widget", "Guess", 0));
        title->setText(QApplication::translate("Widget", "Guess my Number", 0));
        result->setText(QApplication::translate("Widget", "Guessing result", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
