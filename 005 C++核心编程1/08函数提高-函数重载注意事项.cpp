#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



//1，引用作为函数重载条件
void func(int& a)
{
    cout << "func(int& a)" << endl;
}
void func(const int& a)   // int temp = 100；const int& a =temp；
{
    cout << "func(const int& a)" << endl;
}



//2，函数重载碰到函数默认参数   （ *函数重载避免使用默认参数*  ）
void func2(int a, int b = 10)
{
    cout << "func(int a, int b = 10)" << endl;
}
void func2(int a)
{
    cout << "func(int a)" << endl;
}


int main08()
{
    //1，引用作为函数重载条件
    int a = 10;
    func(a);    // 调用 无const
    func(100);  // 调用 有const

    //2，函数重载碰到函数默认参数
   // func2(10);//碰到默认参数产生二义性，
                //两个实例都与函数参数列表匹配，需要避免
    func2(12, 32);


    system("pause");
    return EXIT_SUCCESS;
}