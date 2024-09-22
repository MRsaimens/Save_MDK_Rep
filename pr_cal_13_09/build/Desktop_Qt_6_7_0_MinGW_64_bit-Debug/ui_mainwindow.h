/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *rezult_text;
    QPushButton *pushButton_division;
    QPushButton *pushButton_multiplication;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_minus;
    QLineEdit *number_one;
    QLineEdit *number_two;
    QPushButton *pushButton_save;
    QLabel *rezult_save;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(294, 316);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        rezult_text = new QLabel(centralwidget);
        rezult_text->setObjectName("rezult_text");
        rezult_text->setGeometry(QRect(70, 200, 161, 51));
        rezult_text->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	qproperty-alignment: 'AlignCenter';\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"background-color:white;"));
        rezult_text->setMidLineWidth(0);
        pushButton_division = new QPushButton(centralwidget);
        pushButton_division->setObjectName("pushButton_division");
        pushButton_division->setGeometry(QRect(10, 60, 71, 71));
        pushButton_division->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	qproperty-alignment: 'AlignCenter';\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"background-color:white;"));
        pushButton_multiplication = new QPushButton(centralwidget);
        pushButton_multiplication->setObjectName("pushButton_multiplication");
        pushButton_multiplication->setGeometry(QRect(80, 60, 71, 71));
        pushButton_multiplication->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	qproperty-alignment: 'AlignCenter';\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"background-color:white;"));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName("pushButton_plus");
        pushButton_plus->setGeometry(QRect(150, 60, 71, 71));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	qproperty-alignment: 'AlignCenter';\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"background-color:white;"));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName("pushButton_minus");
        pushButton_minus->setGeometry(QRect(220, 60, 71, 71));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	qproperty-alignment: 'AlignCenter';\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"background-color:white;"));
        number_one = new QLineEdit(centralwidget);
        number_one->setObjectName("number_one");
        number_one->setGeometry(QRect(10, 30, 113, 22));
        number_one->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	qproperty-alignment: 'AlignCenter';\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"background-color:white;"));
        number_two = new QLineEdit(centralwidget);
        number_two->setObjectName("number_two");
        number_two->setGeometry(QRect(160, 30, 113, 22));
        number_two->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	qproperty-alignment: 'AlignCenter';\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"background-color:white;"));
        pushButton_save = new QPushButton(centralwidget);
        pushButton_save->setObjectName("pushButton_save");
        pushButton_save->setGeometry(QRect(80, 130, 141, 61));
        pushButton_save->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	qproperty-alignment: 'AlignCenter';\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"background-color:white;"));
        rezult_save = new QLabel(centralwidget);
        rezult_save->setObjectName("rezult_save");
        rezult_save->setGeometry(QRect(10, 260, 271, 51));
        rezult_save->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	qproperty-alignment: 'AlignCenter';\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"background-color:white;"));
        rezult_save->setMidLineWidth(0);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        rezult_text->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_division->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_multiplication->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        rezult_save->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
