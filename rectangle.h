#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QColor>
#include <QColorDialog>
#include "figure.h"

class Rectangle:public Figure
{

public:
    Rectangle(QWidget * parent);
    ~Rectangle() override;
    void SetPainter(QPainter *_painter,
                    QPen &_pen,
                    QPoint &_point,
                    QRect _rect,
                    QColor & _color,
                    int _width) override;
};

#endif // RECTANGLE_H
