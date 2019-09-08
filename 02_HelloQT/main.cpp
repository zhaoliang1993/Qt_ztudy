#include<QApplication>
#include<QWidget>   //窗口控制基类
#include<QPushButton>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QWidget w;
    w.setWindowTitle("第一个qt程序"); //设置标题
    QPushButton b;
    b.setText("^_^");

    /*如果不指定父对象，对象和对象相互独立
     *指定父对象有2种方法
     *          1）setParent
     *          2) 通过构造函数传参
     */
    b.setParent(&w); //指定父对象
    b.move(100,100); //移动坐标

    QPushButton b1(&w);
    b1.setText("123");
    b1.move(100,0);
    w.show();

    app.exec();
    return 0;
}
