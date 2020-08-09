#include "widget.h"
#include "ui_widget.h"
#include "stdlib.h"
#include "time.h"
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //Initialize:
    srand(time(NULL));

    //Generate (1-10):

    secretNumber = rand() % 10 + 1;
    qDebug() << "Secret Number Generated: " << QString::number(secretNumber);

    //Clear the message label:
    ui->messageLabel->setText("");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_guessButton_clicked()
{
    guessNumber= ui->spinBox->value();
    qDebug() << "The guess number is: " << QString::number(guessNumber);

    if(guessNumber == secretNumber)
    {
        //Congratulations
        ui->messageLabel->setText("You guessed correctly, congratulations!");

        //Disable the guess button:
        ui->guessButton->setDisabled(true);
        ui->startOverButton->setDisabled(false);
    }
    else{
        if(secretNumber < guessNumber){
            ui->messageLabel->setText("Number is lower than that.");
        }

        if(secretNumber > guessNumber){
            ui->messageLabel->setText("Number is higher than that.");
        }
    }
}

void Widget::on_startOverButton_clicked()
{
    //Disable guess button:
    ui->guessButton->setDisabled(false);

    //Disable the start-over button:
    ui->startOverButton->setDisabled(true);

    //Place the spinbox back to 1:
    ui->spinBox->setValue(1);

    //Regenerate the random number:
    secretNumber = rand() % 10 + 1;

    //Clear the message label:
    ui->messageLabel->setText("");
}
