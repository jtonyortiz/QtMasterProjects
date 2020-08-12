#include "rockwidget.h"
#include <QLabel> //UI Component:
#include <QPushButton>
#include <QMessageBox>

RockWidget::RockWidget(QWidget *parent) : QWidget(parent)
{
    //Setting title of window from the constuctor:
    //setWindowTitle("Rock Widget Here");

    //Adds a label to the window:
    QLabel *label = new QLabel("This is my label", this);



    //Example of adding a font:
    QFont label1Font("Times", 20, QFont::Bold);

    //Setting colored text in Qt with QPalette:
    QPalette label1Palette;
    label1Palette.setColor(QPalette::Window, Qt::yellow);
    label1Palette.setColor(QPalette::WindowText, Qt::blue); //Sets the text to blue:

    QPalette label2Palette;
    label2Palette.setColor(QPalette::Window, Qt::green);
    label2Palette.setColor(QPalette::WindowText, Qt::black);


    //Add a syled widget and move it around:
    QLabel * label1 = new QLabel(this);
    label1->setAutoFillBackground(true);
    label1->setText("My colored label");
    label1->setFont(label1Font);
    label1->setPalette(label1Palette);
    label1->move(50,50);


    QLabel * mLabel2 = new QLabel(this);
    mLabel2->setAutoFillBackground(true);
    mLabel2->setPalette(label2Palette);
    mLabel2->setText("This is my label2");
    mLabel2->move(70, 170);
    QFont serifFont("Times", 20, QFont::Bold);
    mLabel2->setFont(serifFont);


    //Add a button and connect to slot:
    QFont buttonFont("Times", 30, QFont::Bold);
    QPushButton *button = new QPushButton(this);
    button->setText("Click Me");
    button->setFont(buttonFont);
    button->move(100,250);

    connect(button, SIGNAL(clicked()), this, SLOT(buttonClicked()));



}

void RockWidget::buttonClicked()
{
    QMessageBox::information(this, "Message","You clicked on my button");

}

QSize RockWidget::sizeHint() const
{
    return QSize(500,500);
}
