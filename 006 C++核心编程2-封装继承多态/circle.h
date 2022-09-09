#pragma once
#include<iostream>
#include"point.h"
using namespace std;

// 删掉函数实现 留下声明 加上分号
// 删掉函数实现 留下声明 加上分号

//圆类
class Circle
{
public:
//设置半径
void setR(int r);

//读取半径
int getR();

//设置圆心
void setCenter(Point center);

//读取圆心
Point getCenter();

private:
    int m_R;//半径

    //在类中可以让另一个类，作为本来中的成员
    Point m_Center;//圆心

};