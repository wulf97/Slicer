#include "MainWindow.h"
#include "GL.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    GL *gl = new GL();
    resize(900, 700);
    setCentralWidget(gl);
}

MainWindow::~MainWindow() {

}
