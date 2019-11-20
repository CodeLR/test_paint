#ifndef FRAME_H
#define FRAME_H
#include <iostream>
#include <QFrame>
#include <QPushButton>
#include <QSlider>
#include "mywidget.h"

class Frame : public QFrame
{
    Q_OBJECT
private:
    MyWidget * _widget;
    QPushButton * butRectangle;
    QPushButton * butCircle;
    QPushButton * butTriangle;
    QSlider *slider;
public:
    Frame(QWidget * parent);
    ~Frame(){}
public slots:
    void slot_Repaint_Circle();
    void slot_Repaint_Rectangle();
    void slot_Repaint_Triangle();
    void slot_Color_change(int i);
};

#endif // FRAME_H
