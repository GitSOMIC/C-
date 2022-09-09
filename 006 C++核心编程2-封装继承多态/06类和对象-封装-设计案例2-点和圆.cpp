#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//点类
class Point
{
public:
    //设置x
    void setX(int x)
    {
        m_X = x;
    }
    //获取x
    int getX()
    {
        return m_X;
    }
    //设置y
    void setY(int y)
    {
        m_Y = y;
    }
    //获取y
    int getY()
    {
        return m_Y;
    }
private:
    int m_X;
    int m_Y;
};
//圆类
class Circle
{
public:
    //设置半径
    void setR(int r)
    {
        m_R = r;
     }
    //读取半径
    int getR()
    {
        return m_R;
    }
    //设置圆心
    void setCenter(Point center)
    {
        m_Center = center;
    }
    //读取圆心
    Point getCenter()
    {
        return m_Center;
    }
private:
    int m_R;//半径

    //在类中可以让另一个类，作为本来中的成员
    Point m_Center;//圆心

};
//判断点和圆关系
void isInCircle(Circle &c, Point &p)
{

    ////空间换时间
    int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
                   (c.getCenter().getY()) - p.getY() *(c.getCenter().getY() - p.getY());
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
    // 
    //时间换空间
    // 
    //if (c.getR() * c.getR() ==
    //    (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
    //    (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY()))
    //{
    //    cout << "点在圆上" << endl;

    //}
    //else if (c.getR() * c.getR() >
    //    (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
    //    (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY()))

    //{
    //    cout << "点在圆内" << endl;
    //}
    //else
    //{
    //    cout << "点在圆外" << endl;
    //}
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