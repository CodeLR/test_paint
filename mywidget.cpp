#include "mywidget.h"
#include <QDebug>
#include <QRect>
#include <QLabel>
MyWidget::MyWidget(QWidget *parent):
    mode(RectangleMode) , MyWidth(0) , QWidget(parent)
{

}
void MyWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)
    painter=new QPainter(this);
    pen.setBrush(Qt::red);
    QPoint center(width()/2,height()/2);
    QRect rectCentr(QRect(Qt::AlignCenter, Qt::AlignCenter, 400, 400));
    rectCentr.moveCenter(center);
    switch (mode) {
    case CircleMode:
        painter->begin(this);
        circle=new Circle(this);
        figure=circle;
        figure->SetPainter(painter,pen,center,rectCentr,color,MyWidth);
        painter->end();
        break;
    case RectangleMode:
        painter->begin(this);
        myRec=new Rectangle(this);
        figure=myRec;
        figure->SetPainter(painter,pen,center,rectCentr,color,MyWidth);

        painter->end();
        break;
    case TriangleMode:
        painter->begin(this);
        myTriangle=new Triangle(this);
        figure=myTriangle;
        figure->SetPainter(painter,pen,center,rectCentr,color,MyWidth);
        painter->end();
        break;
    }

}

void MyWidget::mouseDoubleClickEvent(QMouseEvent *event)
{

    if (event->x()<width() && event->y()<height()) {
        color=QColorDialog::getColor();
    }
    repaint();

}

void MyWidget::RepaintMyPainterCircle()
{ 
    mode=CircleMode;
    repaint();
}

void MyWidget::RepaintMyPainterTriangle()
{
    mode=TriangleMode;
    repaint();
}

void MyWidget::Color_Change(int set_value)
{
    MyWidth=set_value;
    repaint();
}

void MyWidget::RepaintMyPainterRectangle()
{
    mode=RectangleMode;
    repaint();

}

