#ifndef FIGURE_H
#define FIGURE_H

#include <QPainter>
#include <QWidget>
#include <QPainter>
#include <QPen>
#include <QPoint>
#include <QRect>
class Figure
{
public:
    Figure();
    virtual~Figure();
    virtual void SetPainter(QPainter * _painter,
                            QPen & _pen,
                            QPoint & _point,
                            QRect _rect,
                            QColor &_color,
                            int _width)=0;
};

#endif // FIGURE_H
// Сделать параметры , по параметрам сделать вставку элемента в Мой виджет
