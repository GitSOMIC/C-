#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;




//函数占位参数
void func1(int a, int)
{
    cout << "this is func" << a << endl;

}
//占位参数也可以有默认参数

void func2(int a, int = 10)
{
    cout << "this is func" << a << endl;

}

int main06()
{
    func1(10, 10);//占位参数必须填补
    func2(10);//占位参数有默认参数填补了


    system("pause");
    return EXIT_SUCCESS;
}