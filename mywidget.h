#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QColor>
#include <QColorDialog>
#include "figure.h"
#include "rectangle.h"
#include "circle.h"
#include "triangle.h"
class MyWidget : public QWidget
{
    Q_OBJECT

private:

    Triangle *myTriangle;
    Rectangle *myRec;  // Создание классов
    Circle *circle;
    Figure *figure;

    QPainter *painter;  // Классы для работы с фигурами
    QPen pen;
    QColor color;

    int MyWidth;       // конроль дейтвий

    enum FigureMode
    {
        CircleMode,
        RectangleMode, // Выбор фигуры
        TriangleMode
    };
    FigureMode mode;
public:
    explicit MyWidget(QWidget *parent = nullptr);
    ~MyWidget()override{}
    void RepaintMyPainterRectangle();  //
    void RepaintMyPainterCircle();              // методы
    void RepaintMyPainterTriangle();
    void Color_Change(int set_value);


protected:
    void paintEvent(QPaintEvent *event) override;  // методы
    void mouseDoubleClickEvent(QMouseEvent *event) override;


};

#endif // MYWIDGET_H
