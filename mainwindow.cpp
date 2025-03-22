#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int firstNum, secondNum, result;

void MainWindow::on_btn_add_clicked()
{
    firstNum = ui->txt_fNum->text().toInt();
    secondNum = ui->txt_sNum->text().toInt();
    result = firstNum + secondNum;

    ui->txt_res->setText(QString::number(result));
}


void MainWindow::on_btn_subtract_clicked()
{
    firstNum = ui->txt_fNum->text().toInt();
    secondNum = ui->txt_sNum->text().toInt();
    result = firstNum - secondNum;

    ui->txt_res->setText(QString::number(result));
}


void MainWindow::on_btn_multiply_clicked()
{
    firstNum = ui->txt_fNum->text().toInt();
    secondNum = ui->txt_sNum->text().toInt();
    result = firstNum * secondNum;

    ui->txt_res->setText(QString::number(result));
}


void MainWindow::on_btn_divide_clicked()
{
    firstNum = ui->txt_fNum->text().toInt();
    secondNum = ui->txt_sNum->text().toInt();
    result = firstNum / secondNum;

    ui->txt_res->setText(QString::number(result));
}

