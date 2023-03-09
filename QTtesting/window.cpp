#include "window.h"
#include <QPushButton>
#include <QFileDialog>

Window::Window(QWidget *parent) :
QWidget(parent){
	setFixedSize(854, 640);

	m_button = new QPushButton("Browse", this);
	m_button->setGeometry(10,10,80,30);
	QPushButton *m_button2 = new QPushButton("Calculate", this);
	m_button2->setGeometry(10,40,80,30);



	connect(m_button, &QPushButton::released, this, &Window::Browse);
	//The last parameter is what function will be called once the button is pushed

}

void Window::Browse () {
	QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Open File"),"/path/to/file/",tr("Ode Files (*.ode)"));
}
