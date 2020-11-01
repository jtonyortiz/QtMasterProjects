#include "mainwindow.h"
#include <QPushButton>
#include <QDebug>
#include <QMenuBar>
#include <QStatusBar>
#include <QAction>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //Add central widget:
    QPushButton * button  = new QPushButton("Hello", this);
    setCentralWidget(button);



    //Declare Quit Action:
    QAction * quitAction = new QAction("Quit");
    connect(quitAction, &QAction::triggered, [=](){
       QApplication::quit();
    });

    //Add menu functionalities:
    QMenu * fileMenu = menuBar()->addMenu("File");
    //Action added to filemenu:
    fileMenu->addAction(quitAction);

    menuBar()->addMenu("Edit");
    menuBar()->addMenu("Window");
    menuBar()->addMenu("Settings");
    menuBar()->addMenu("Help");

    //Add status bar message
    //2nd param, the amount of second to keep message showing:
    statusBar()->showMessage("Uploading file contents...", 3000);
    //statusBar()->clearMessage(); //Clears the message from before:
}


MainWindow::~MainWindow()
{
}

QSize MainWindow::sizeHint() const
{
    return QSize(800,500);
}

