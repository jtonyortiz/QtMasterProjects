#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    /*
    //1. String notation:
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(changeText()));
    */

    /*
    //2. Functor notation:
    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::changeText);
    */

    //3. Lambda Notation:
    connect(ui->pushButton, &QPushButton::clicked, [=](){
       ui->label->setText("Lambda");
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeText()
{
    qDebug() << "User clicked on button";
    ui->label->setText("Hello There");
}

