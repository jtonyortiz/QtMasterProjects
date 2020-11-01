#include "widget.h"

#include <QPushButton>
#include <QMessageBox>
#include <QDebug>

Widget::Widget(QWidget *parent): QWidget(parent)
{

    QPushButton * button  = new QPushButton(this);
    button->setText("Click Me");
    button->move(200,200);
    connect(button, &QPushButton::clicked,[=](){

        /*
        //The hard way
        QMessageBox message;
        message.setWindowTitle("Message Title");
        message.setText("Something Happened");
        message.setInformativeText("Do you want to do something?");
        message.setIcon(QMessageBox::Critical);
        message.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        message.setDefaultButton(QMessageBox::Cancel);

        int ret = message.exec();
        */

        /*
        int ret  = QMessageBox::critical(this, "Message Title", "Something Happened, do you want to do something about it?",
               QMessageBox::Ok, QMessageBox::Cancel);
        */

        //Information Message:
        /*
        int ret = QMessageBox::information(this, "Message Title", "Something Happened, do you want to do something about it?",
                                           QMessageBox::Ok, QMessageBox::Cancel);

        */

        /*
        //Question Message:
        int ret = QMessageBox::question(this, "Message Title", "Something Happened, do you want to do something about it?",
                                        QMessageBox::Ok, QMessageBox::Cancel);
        */

        //Warning Message:
        int ret = QMessageBox::warning(this, "Message Title", "Something Happened, do you want to do something about it?",
                                       QMessageBox::Ok, QMessageBox::Cancel);



        if(ret == QMessageBox::Ok){
            qDebug() << "User clicked on OK";
        }

        if(ret == QMessageBox::Cancel){
            qDebug() << "User clicked on Cancel";
        }
    });
}

Widget::~Widget()
{

}

