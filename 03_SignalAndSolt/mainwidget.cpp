#include "mainwidget.h"
#include<QPushButton>
MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    b1.setParent(this);
    b2 = new QPushButton(this);

    b1.setText("close");
    b1.move(100,100);
    b2->setText("123");
    b2->move(100,0);

    connect(&b1,&QPushButton::pressed,this,&MainWidget::close);
    //一参数：信号发出者，指针类型
    //二参数，处理的信号，   &发送者类名::信号名字
    //三参数，信号接收者，指针类型
    //四参数，信号接收者，槽函数    &接收者类名::槽函数


    //自定义槽
    //Qt5:任意的成员函数，普通全局函数，静态函数
    //槽函数需要和信号一致(参数，返回值)  信号和槽都无返回值

    connect(b2,&QPushButton::released,this,&MainWidget::mySloSlot);
    connect(b2,&QPushButton::released,&b1,&QPushButton::hide);

}
void MainWidget::mySloSlot()
{
    b2->setText("heloo,yes123456");
}
MainWidget::~MainWidget()
{

}
