#include <iostream>
#include <QApplication>
#include <QPushButton>
#include <QFileDialog>
#include <QString>
#include "window.h"

//void handleButton();

int main (int argc, char* argv[]) {
  QApplication app (argc, argv);

  Window window;
  window.show();

  //QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
//"/home", tr("Ode File (*.Ode)"));

  //connect(button, &QPushButton::released, this, &handleButton);

  return app.exec();
}

/*void handleButton() {
  QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
"/home", tr("Ode File (*.Ode)"));
}
*/
