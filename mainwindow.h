#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include "frame.h"
class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    Frame * myframe; // Главный фрейм

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};
#endif // MAINWINDOW_H
