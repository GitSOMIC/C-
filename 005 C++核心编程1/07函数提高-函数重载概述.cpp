#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//函数名可以相同，提高复用性
//函数重载满足条件：
//1，同一个作用域
//2，函数名称相同
//
//3，函数参数类型不同，或者个数不同，或者顺序不同

//函数返回值不可以作为函数重载条件


void func()
{
    cout << "func的调用" << endl;
}
void func(int a)
{
    cout << "func(int a)的调用" << endl;
}
void func(double a)
{
    cout << "func的调用(double a)" << endl;
}
void func(int a,double b)
{
    cout << "func的调用(int a,double b)" << endl;
}
void func(double a,int b)
{
    cout << "func的调用(double a,int b)" << endl;
}
//函数返回值类型不可以作为函数重载条件
//int func(double a,int b)
//{
//    cout << "func的调用(double a,int b)" << endl;
//}



int main07()
{
    func();
    func(10);
    func(3.122);
    func(10,2.546);
    func(2.645,45);
    
    system("pause");
    return EXIT_SUCCESS;
}