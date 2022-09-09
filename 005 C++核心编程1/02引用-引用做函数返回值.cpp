#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 返回局部变量引用
int& test01()
{
    int a = 10; //局部变量
    return a;
}
//返回静态变量引用
int& test02()
{
    static int a = 20;
    return a;
}




int main()
{
    //不要返回局部变量的引用
    int& ref = test01();
    cout << "ref = " << ref << endl;
    cout << "ref = " << ref << endl;

    //如果函数做左值，那么必须返回引用
    int& ref2 = test02();
    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;
    // 如果函数的返回值是引用，这个函数调用可以作为左值
    test02() = 10000;  // test02（）返回a的引用，a被修改为10000

    cout << "ref2 = " << ref2 << endl;
    cout << "test02() " << test02() << endl;
    cout << "ref2 = " << ref2 << endl;


    system("pause");
    return EXIT_SUCCESS;
}