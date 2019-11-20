#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"
#include <QWidget>
#include <QPainter>
#include <QPainterPath>
class Triangle : public Figure
{
public:
    Triangle(QWidget * parent=nullptr);
    ~Triangle() override;
    void SetPainter(QPainter *_painter, QPen &_pen, QPoint &_point, QRect _rect, QColor &_color, int _width) override;
};

#endif // TRIANGLE_H
