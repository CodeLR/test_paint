#include "triangle.h"
Triangle::Triangle(QWidget * parent)
{

}

Triangle::~Triangle()
{

}

void Triangle::SetPainter(QPainter *_painter, QPen &_pen, QPoint &_point, QRect _rect, QColor &_color, int _width)
{

    QPainterPath path;
    QPoint poin_1(_rect.left() + (_rect.width() / 2),_rect.top());
    QPoint point_2(_rect.bottomRight());
    QPoint point_3(_rect.bottomLeft());
    path.moveTo(poin_1);
    path.lineTo(point_2);
    path.lineTo(point_3);
    path.lineTo(poin_1);
    _pen.setWidth(_width);
    _painter->setPen(_pen);
    _painter->setBrush(_color);
    _painter->drawPath(path);
}
