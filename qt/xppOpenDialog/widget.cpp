#include "widget.h"
#include "ui_widget.h"
#include <QWidget>
#include <QListWidget>
#include <QLabel>
#include <QDropEvent>
#include <QMimeData>
#include <QFileInfo>
#include <QDragEnterEvent>
#include <QDebug>
#include <iostream>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    setAcceptDrops(true);
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::dragEnterEvent(QDragEnterEvent* event) {
    if (event->mimeData()->hasUrls() && event->mimeData()->urls().count()==1) {
        event->accept();
    } else {
        event->ignore();
    }
}

void Widget::dropEvent(QDropEvent* event) {
    const QMimeData* mimeData = event->mimeData();
    QString Filename = mimeData->urls().first().toLocalFile();

    qDebug() << "File Name: " << Filename;
}
