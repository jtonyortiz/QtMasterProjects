//====================================================================
//Author: James Anthony Ortiz
//File: widget.cpp
//Description: a demo of the QLineEdit Class in the Qt Framework
//====================================================================
#include "widget.h"
#include <QPushButton>
#include <QFont>
#include <QLabel>
#include <QLineEdit>
#include <QDebug>


Widget::Widget(QWidget *parent): QWidget(parent)
{

    //firstName Name:
    QLabel * firstNameLabel = new QLabel("First Name", this);
    firstNameLabel->setMinimumSize(70,50);
    firstNameLabel->move(10,10);

    QLineEdit * firstNameLineEdit = new QLineEdit(this);
    firstNameLineEdit->setMinimumSize(200,50);
    firstNameLineEdit->move(100,10);

    //lastName Name:
    QLabel * lastNameLabel = new QLabel("Last Name", this);
    lastNameLabel->setMinimumSize(70,50);
    lastNameLabel->move(10,70);

    QLineEdit * lastNameLineEdit = new QLineEdit(this);
    lastNameLineEdit->setMinimumSize(200,50);
    lastNameLineEdit->move(100, 70);


    //City city:
    QLabel * cityLabel = new QLabel("City", this);
    cityLabel->setMinimumSize(70,50);
    cityLabel->move(10,130);

    QLineEdit * cityLineEdit = new QLineEdit(this);
    cityLineEdit->setMinimumSize(200,50);
    cityLineEdit->move(100, 130);


    //Add button:
    QFont buttonFont("Times", 20, QFont::Bold);
    QPushButton * button  = new QPushButton("Grab Data",this);
    button->setFont(buttonFont);
    button->move(80,190);
    connect(button, &QPushButton::clicked,[=](){
        //Grab text from input from above:
        QString firstName = firstNameLineEdit->text();
        QString lastName = lastNameLineEdit->text();
        QString city = cityLineEdit->text();



        if(!firstName.isEmpty() && !lastName.isEmpty() && !city.isEmpty())
        {
            qDebug() << "First name is: " << firstName;
            qDebug() << "Last Name is: " << lastName;
            qDebug() << "City is: " << city;
        }else{
            qDebug() << "One Field is Empty.";
        }
    });

    //Respond to signals from QLineEdit:

    //cursorPositionChanged
    /*
    connect(firstNameLineEdit, &QLineEdit::cursorPositionChanged, [=](){
        qDebug() << "The cursor position is " << firstNameLineEdit->cursorPosition();
    });

    */

    /*
    //editingFinsihed: emitted when user clicks enter or when line edits
    connect(firstNameLineEdit, &QLineEdit::editingFinished,[=]() {
        qDebug() << "Editing Finished: ";
    });
    */

    /*
    //return Pressed:
    connect(firstNameLineEdit, &QLineEdit::returnPressed,[=]() {
        qDebug() << "Return pressed: ";
    });
    */

    /*
    //selectionChanged
    connect(firstNameLineEdit, &QLineEdit::selectionChanged,[=]() {
        qDebug() << "Selection changed: ";
    });
    */

    /*
    //textChanged:
    connect(firstNameLineEdit, &QLineEdit::textChanged,[=]() {
        qDebug() << "Selection changed to:" << firstNameLineEdit->text();
    });
    */

    connect(firstNameLineEdit, &QLineEdit::textEdited,[=]() {
        qDebug() << "Selection changed to: " << firstNameLineEdit->text();
    });

    //Change text in QLineEdit programmatically:
    //lastNameLineEdit->setText("Say your last name");

    //Hint text:
    firstNameLineEdit->setPlaceholderText("First Name");
    lastNameLineEdit->setPlaceholderText("Last Name");
    cityLineEdit->setPlaceholderText("City");
}

Widget::~Widget()
{

}

