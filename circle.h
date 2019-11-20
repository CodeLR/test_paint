#ifndef CIRCLE_H
#define CIRCLE_H
#include "figure.h"
#include <QPainter>
class Circle:public Figure
{
public:
    Circle(QWidget * parent);
    ~Circle() override;
    void SetPainter(QPainter *_painter, QPen &_pen, QPoint &_point, QRect _rect, QColor &_color, int _width) override;
signals:

public slots:
};

#endif // CIRCLE_H
