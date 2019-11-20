#include "rectangle.h"
#include <QDebug>
#include <QWidget>
Rectangle::Rectangle(QWidget * parent)
{

}

Rectangle::~Rectangle()
{

}

void Rectangle::SetPainter(QPainter *_painter, QPen &_pen, QPoint &_point, QRect _rect,QColor & _color,int _width)
{
            _pen.setWidth(_width);
            _painter->setPen(_pen);
            _painter->setBrush(_color);
            _painter->drawRect(_rect);
}



