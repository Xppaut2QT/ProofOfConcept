#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QInputDialog>
#include "llnlmath.h"
#include <QDebug>
#include <string>

//typedef double real;
real r;

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

void MainWindow::getInput() {
    bool ok;
    r = QInputDialog::getDouble(this, tr("QInputDialog::getDouble()"),
      tr("Input:"),0,-10000,10000, 2, &ok, Qt::WindowFlags(), 1);

    if (ok) {
        int i = 10;
        r = RPowerI(r,i);
        qInfo() << (r);
    }
}

void MainWindow::on_pushButton_6_released()
{
    getInput();
}
