#include "frame.h"
#include <QGridLayout>
#include <QDebug>
Frame::Frame(QWidget *parent):
    QFrame(parent)
{

   _widget=new MyWidget(this);
   QGridLayout * layaut=new QGridLayout(this);
   butRectangle=new QPushButton("RECTANGLE",this);  // Кнопки
   butCircle=new QPushButton("CIRCLE",this);
   butTriangle=new QPushButton("TRIANGLE",this);
   slider=new QSlider(Qt::Horizontal,this);
   layaut->addWidget(_widget);
   layaut->addWidget(slider);
   layaut->addWidget(butRectangle);   // Лайаут
   layaut->addWidget(butCircle);
   layaut->addWidget(butTriangle);
   connect(butRectangle,SIGNAL(clicked()),this,SLOT(slot_Repaint_Rectangle()));  // Коннекты
   connect(butCircle,SIGNAL(clicked()),this,SLOT(slot_Repaint_Circle()));
   connect(butTriangle,SIGNAL(clicked()),this,SLOT(slot_Repaint_Triangle()));
   connect(slider,SIGNAL(valueChanged(int)),this,SLOT(slot_Color_change(int)));
}

void Frame::slot_Repaint_Circle()
{
    _widget->RepaintMyPainterCircle();
}

void Frame::slot_Repaint_Rectangle()
{
    _widget->RepaintMyPainterRectangle();
}
void Frame::slot_Repaint_Triangle()
{
    _widget->RepaintMyPainterTriangle();
}

void Frame::slot_Color_change(int i)
{
    _widget->Color_Change(i);
}


