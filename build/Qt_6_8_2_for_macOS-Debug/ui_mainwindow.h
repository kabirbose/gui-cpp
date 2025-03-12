/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
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
    QLabel *lbl_fNum;
    QLabel *lbl_sNum;
    QLineEdit *txt_fNum;
    QLineEdit *txt_sNum;
    QPushButton *btn_add;
    QPushButton *btn_subtract;
    QPushButton *btn_multiply;
    QPushButton *btn_divide;
    QLabel *lbl_res;
    QLineEdit *txt_res;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(380, 459);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lbl_fNum = new QLabel(centralwidget);
        lbl_fNum->setObjectName("lbl_fNum");
        lbl_fNum->setGeometry(QRect(70, 140, 91, 16));
        lbl_sNum = new QLabel(centralwidget);
        lbl_sNum->setObjectName("lbl_sNum");
        lbl_sNum->setGeometry(QRect(70, 170, 101, 16));
        txt_fNum = new QLineEdit(centralwidget);
        txt_fNum->setObjectName("txt_fNum");
        txt_fNum->setGeometry(QRect(190, 140, 113, 21));
        txt_sNum = new QLineEdit(centralwidget);
        txt_sNum->setObjectName("txt_sNum");
        txt_sNum->setGeometry(QRect(190, 170, 113, 21));
        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName("btn_add");
        btn_add->setGeometry(QRect(70, 220, 31, 32));
        btn_subtract = new QPushButton(centralwidget);
        btn_subtract->setObjectName("btn_subtract");
        btn_subtract->setGeometry(QRect(110, 220, 31, 32));
        btn_multiply = new QPushButton(centralwidget);
        btn_multiply->setObjectName("btn_multiply");
        btn_multiply->setGeometry(QRect(150, 220, 31, 32));
        btn_divide = new QPushButton(centralwidget);
        btn_divide->setObjectName("btn_divide");
        btn_divide->setGeometry(QRect(190, 220, 31, 32));
        lbl_res = new QLabel(centralwidget);
        lbl_res->setObjectName("lbl_res");
        lbl_res->setGeometry(QRect(70, 280, 41, 16));
        txt_res = new QLineEdit(centralwidget);
        txt_res->setObjectName("txt_res");
        txt_res->setGeometry(QRect(120, 280, 113, 21));
        txt_res->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lbl_fNum->setText(QCoreApplication::translate("MainWindow", "First Number:", nullptr));
        lbl_sNum->setText(QCoreApplication::translate("MainWindow", "Second Number:", nullptr));
        btn_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btn_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        lbl_res->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
