#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"circle.h"
#include"point.h"
using namespace std;
//判断点和圆关系
void isInCircle(Circle& c, Point& p)
{

    ////空间换时间
    int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
        (c.getCenter().getY()) - p.getY() * (c.getCenter().getY() - p.getY());
    int rDistance = c.getR() * c.getR();
    if (distance == rDistance)
    {
        cout << "点在圆上" << endl;

    }
    else if (distance < rDistance)

    {
        cout << "点在圆内" << endl;
    }
    else
    {
        cout << "点在圆外" << endl;
    }

}
int main()
{
    //创建圆
    Circle c;
    c.setR(10);
    //创建圆心点
    Point p;
    p.setX(10);
    p.setY(0);
    c.setCenter(p);
    //创建点
    Point p1;
    p1.setX(10);
    p1.setY(10);
    //函数检测点与圆的关系
    isInCircle(c, p1);


    system("pause");
    return EXIT_SUCCESS;
}