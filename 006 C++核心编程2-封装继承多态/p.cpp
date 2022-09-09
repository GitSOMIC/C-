#include"point.h"

//点类

//class Point    //删掉
//{
//public:


//void setX(int x)   // 这样是全局函数
//{
//    m_X = x;
//}


//设置x
void Point::setX(int x)   // 告诉她是 Point 作用域下的函数  Point::
{
    m_X = x;
}
//获取x
int Point::getX()
{
    return m_X;
}
//设置y
void Point::setY(int y)
{
    m_Y = y;
}
//获取y
int Point::getY()
{
    return m_Y;
}


//private:           //删掉
//    int m_X;
//    int m_Y;
//};
