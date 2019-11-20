#include "circle.h"
#include <QWidget>
Circle::Circle(QWidget * parent)
{

}
Circle::~Circle()
{

}

void Circle::SetPainter(QPainter *_painter, QPen &_pen, QPoint &_point, QRect _rect, QColor &_color, int _width)
{
    _pen.setWidth(_width);
    _painter->setPen(_pen);
    _painter->setBrush(_color);
    _painter->drawEllipse(_point,200,200);
}
