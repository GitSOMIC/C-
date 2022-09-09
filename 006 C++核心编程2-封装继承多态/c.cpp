#include"circle.h"


//圆类

//class Circle   
//{
//public:

    //设置半径
void Circle::setR(int r)   // 留下函数定义 ，改为成员函数
{
    m_R = r;
}
//读取半径
int Circle::getR()
{
    return m_R;
}
//设置圆心
void Circle::setCenter(Point center)
{
    m_Center = center;
}
//读取圆心
Point Circle::getCenter()
{
    return m_Center;
}


//private:
//    int m_R;//半径
//    Point m_Center;
//
//};