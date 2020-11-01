#include "widget.h"
#include <QPushButton>
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //Clicked signal for button:
    QFont buttonFont("Times", 20, QFont::Bold);
    QPushButton * button  = new QPushButton("Button1", this);
    button->setMinimumSize(200,100);
    button->setFont(buttonFont);
    //Lambda functionality for button:
    connect(button, &QPushButton::clicked, [=](){
        qDebug() << "Button Clicked";
    });

    //Create instance of button 2:
    QPushButton * button2  = new QPushButton("Button2", this);
    button2->setMinimumSize(200,100);
    button2->move(210,0);
    button2->setFont(buttonFont);
    //Lambda functionality for button:
    //Capture pressed signal:
    connect(button2, &QPushButton::clicked, [=](){
        qDebug() << "Button Pressed";
    });

    //Capture realease signal:
    connect(button2, &QPushButton::released, [=](){
        qDebug() << "Button Released";
    });
}

Widget::~Widget()
{
}

