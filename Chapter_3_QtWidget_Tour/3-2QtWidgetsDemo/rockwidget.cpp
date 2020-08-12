#include "rockwidget.h"
#include <QLabel> //UI Component:

RockWidget::RockWidget(QWidget *parent) : QWidget(parent)
{
    //Setting title of window from the constuctor:
    //setWindowTitle("Rock Widget Here");

    //Adds a label to the window:
    QLabel *label = new QLabel("This is my label", this);


}
