//=====================================================================
//Author: James Anthony Ortiz
//File: widget.cpp
//Description: A demo of the QTextEdit Class in the Qt Framework
//=====================================================================
#include "widget.h"
#include <QTextEdit>
#include <QPushButton>
#include <QLabel>
#include <QDebug>

Widget::Widget(QWidget *parent): QWidget(parent){
    setupUI(); //Calls methods to design functionality in program (see below)
    setFixedSize(400,400); //Sets the size of the window
}//end Widget()

Widget::~Widget(){
}

void Widget::setupUI(){
    QFont labelFont("Times", 10, QFont::Bold);
    QLabel * mLabel = new QLabel("This is my text", this);
    mLabel->setFont(labelFont);
    mLabel->move(150,25);

    QTextEdit * textEdit = new QTextEdit(this);
    textEdit->move(70,55);

    /*
    //textChanged
    connect(textEdit, &QTextEdit::textChanged,[=]()
    {
        qDebug() << "Text changed";
    });
    */

    /* Buttons with options:
     * Copy
     * Paste
     * undo
     * redo
     * setHtml
     * setPlainText
   */

    //Copy, cut and paste:
    QPushButton * copyButton = new QPushButton("Copy", this);
    copyButton->setMinimumSize(50,25);
    copyButton->move(60,250);
    connect(copyButton, &QPushButton::clicked,[=](){
       textEdit->copy();
    });

    QPushButton * cutButton = new QPushButton("Cut", this);
    cutButton->setMinimumSize(50,25);
    cutButton->move(160,250);
    connect(cutButton, &QPushButton::clicked,[=](){
        textEdit->cut();
    });

    QPushButton * pasteButton = new QPushButton("Paste", this);
    pasteButton->setMinimumSize(50,25);
    pasteButton->move(260,250);
    connect(pasteButton, &QPushButton::clicked,[=](){
        textEdit->paste();
    });

    //Undo and redo:
    QPushButton * undoButton = new QPushButton("Undo", this);
    undoButton->setMinimumSize(50,25);
    undoButton->move(60,280);
    connect(undoButton, &QPushButton::clicked,[=](){
        textEdit->undo();
    });

    QPushButton * redoButton = new QPushButton("Redo", this);
    redoButton->setMinimumSize(50,25);
    redoButton->move(160,280);
    connect(redoButton, &QPushButton::clicked,[=](){
        textEdit->redo();
    });

    //Set text and html to the text edit:
    QPushButton * plainTextButton = new QPushButton("Plain Text", this);
    plainTextButton->setMinimumSize(50,25);
    plainTextButton->move(260,280);
    connect(plainTextButton, &QPushButton::clicked,[=](){
        textEdit->setPlainText("Build Cross Platform C++ GUI Applications with Qt, Run them on Windows,"
                               " Mac, Linux, Android, iOS and Embedded Devices");
    });

    QPushButton * htmlButton = new QPushButton("Html", this);
    htmlButton->setMinimumSize(50,25);
    htmlButton->move(60,310);
    //Test with sample HTML code:
    connect(htmlButton, &QPushButton::clicked,[=](){
        textEdit->setHtml("<!DOCTYPE html><html><body><h1>My First Heading</h1><p>My first paragraph.</p></body></html>");
    });

    //Grab text to work with it in the program:
    //Grab text and html:
    QPushButton * grabTextButton = new QPushButton("Grab Text", this);
    grabTextButton->setMinimumSize(50,25);
    grabTextButton->move(160,310);
    connect(grabTextButton, &QPushButton::clicked,[=](){
        qDebug() << "The plain text inside the text edit is : " << textEdit->toPlainText();
    });

    QPushButton * grabHtmlButton = new QPushButton("Grab Html", this);
    grabHtmlButton->setMinimumSize(50,25);
    grabHtmlButton->move(260,310);
    connect(grabHtmlButton, &QPushButton::clicked,[=](){
        qDebug() << "The Html inside the edit is : " << textEdit->toHtml();
    });


}//end setupUI()

