/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *guessButton;
    QPushButton *startOverButton;
    QLabel *messageLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(460, 320);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 40, 131, 31));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        spinBox = new QSpinBox(Widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(80, 130, 42, 22));
        spinBox->setMinimum(1);
        spinBox->setMaximum(10);
        guessButton = new QPushButton(Widget);
        guessButton->setObjectName(QString::fromUtf8("guessButton"));
        guessButton->setGeometry(QRect(150, 130, 75, 23));
        startOverButton = new QPushButton(Widget);
        startOverButton->setObjectName(QString::fromUtf8("startOverButton"));
        startOverButton->setGeometry(QRect(250, 130, 75, 23));
        messageLabel = new QLabel(Widget);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        messageLabel->setGeometry(QRect(70, 240, 281, 31));
        messageLabel->setFont(font);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Guess My Number", nullptr));
        guessButton->setText(QCoreApplication::translate("Widget", "Guess", nullptr));
        startOverButton->setText(QCoreApplication::translate("Widget", "Start Over", nullptr));
        messageLabel->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
