#include "mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setMinimumSize(800,800);
    setWindowTitle("FIGURE");
    myframe=new Frame(this);    //  Параметры окна и создание фрейма
    setCentralWidget(myframe);
}

MainWindow::~MainWindow()
{

}

