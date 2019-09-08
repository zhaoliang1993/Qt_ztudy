#include "mainwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w; //执行MainWidget构造函数
    MainWidget w1;
    //w.setWindowTitle("信号和槽");
    w.show();
    //w1.show();

    return a.exec();
}
