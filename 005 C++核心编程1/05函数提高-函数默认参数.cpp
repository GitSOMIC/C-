#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int func01(int a, int b = 10, int c = 20)
{
    return a + b + c;
}
//注意事项
// 1，如果某个位置已经有了默认参数，那么这个位置往后，
// 从左到右都必须有默认参数
//int func02(int a, int b = 20, int c)
//{
//    return a + b + c;
//}

//2，如果函数声明有默认参数，函数定义（实现）就不能有默认参数，反之亦然
// 防止二义性，声明和实现只能有一个有默认参数
int func03(int a , int b );

int func03(int a = 10, int b = 20)
{
    return a + b;
}

int main05()
{

    cout << func03() << endl;
    cout << func03(100,200) << endl;

    system("pause");
    return EXIT_SUCCESS;
}