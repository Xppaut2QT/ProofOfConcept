#include "window.h"
#include <QPushButton>
#include <QFileDialog>

Window::Window(QWidget *parent) :
QWidget(parent){
	setFixedSize(200, 100);

	m_button = new QPushButton("Browse", this);
	m_button->setGeometry(10,10,80,30);


	connect(m_button, &QPushButton::released, this, &Window::handleButton);

}

void Window::handleButton () {
	QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Open File"),"/path/to/file/",tr("Ode Files (*.ode)"));
}
