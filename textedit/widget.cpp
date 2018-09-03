#include "widget.h"
#include <QTextEdit>
#include <QPushButton>
#include <QLabel>
#include <QDebug>

using namespace std;





Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // ui configurations
    setupUi();

    // fix the window size
    setFixedSize(380, 440);
}

Widget::~Widget()
{

}

void Widget::setupUi()
{
    //font title and textEditor
    QFont lblFont("Times", 10, QFont::Bold);
    QLabel *title = new QLabel("Text Editing Demo", this);
    title->setFont(lblFont);
    title->move(100, 25);

    QTextEdit *textEdit = new QTextEdit(this);
    textEdit->move(60, 55);

    //textChanged
    connect(textEdit, &QTextEdit::textChanged, [=]{
        qDebug() << "text changed.";
    });


    /*********************************************************/

    // Copy, Cut and Paste
    QPushButton *cpBtn = new QPushButton("copy", this);
    cpBtn->setMinimumSize(50, 25);
    cpBtn->move(30, 260);

    QPushButton *cutBtn = new QPushButton("cut", this);
    cutBtn->setMinimumSize(50, 25);
    cutBtn->move(130, 260);

    QPushButton *pasteBtn = new QPushButton("paste", this);
    pasteBtn->setMinimumSize(50, 25);
    pasteBtn->move(230, 260);

    // Undo Redo
    QPushButton *undoBtn = new QPushButton("undo", this);
    undoBtn->setMinimumSize(50, 25);
    undoBtn->move(30, 300);

    QPushButton *redoBtn = new QPushButton("redo", this);
    redoBtn->setMinimumSize(50, 25);
    redoBtn->move(130, 300);


    // setHtml and setPlainText
    QPushButton *setHtml = new QPushButton("set html", this);
    setHtml->setMinimumSize(50, 25);
    setHtml->move(30, 340);

    QPushButton *setPlainText = new QPushButton("set plaintext", this);
    setPlainText->setMinimumSize(50, 25);
    setPlainText->move(130, 340);


    /*********************************************************/
    // bind signal and slot
    connect(cpBtn, &QPushButton::clicked, [=]{
        textEdit->copy();
    });

    connect(cutBtn, &QPushButton::clicked, [=]{
        textEdit->cut();
    });

    connect(pasteBtn, &QPushButton::clicked, [=]{
        textEdit->paste();
    });

    connect(undoBtn, &QPushButton::clicked, [=]{
        textEdit->undo();
    });


    connect(redoBtn, &QPushButton::clicked, [=]{
        textEdit->redo();
    });

    connect(setHtml, &QPushButton::clicked, [=]{
        textEdit->setHtml("<!DOCTYPE html><html><body><p>I am normal</p><p style=\"color:red;\">I am red</p><p style=\"color:blue;\">I am blue</p><p style=\"font-size:50px;\">I am big</p></body></html>");
    });

    connect(setPlainText, &QPushButton::clicked, [=]{
        textEdit->setPlainText("C++ (/ˌsiːˌplʌsˈplʌs/ \"see plus plus\") is a general-purpose programming language. It has imperative, object-oriented and generic programming features, while also providing facilities for low-level memory manipulation. ");
    });


    // grab text context from html and plaintext displayed within the texteditor
    QPushButton *getHtml = new QPushButton("getHtml", this);
    getHtml->setMinimumSize(50,25);
    getHtml->move(30,380);

    QPushButton *getPlainText = new QPushButton("getText", this);
    getPlainText->setMinimumSize(50,25);
    getPlainText->move(130,380);

    // configure signal and slot for getHtml and getText
    connect(getHtml, &QPushButton::clicked, [=]{
        qDebug() << "The html content: \n" << textEdit->toHtml();
    });

    connect(getPlainText, &QPushButton::clicked, [=]{
        qDebug() << "The text content is : \n" << textEdit->toPlainText();
    });

}

QSize Widget::sizeHint() const
{
    return QSize(380, 440);
}
