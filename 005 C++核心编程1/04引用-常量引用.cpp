#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//    int temp = 10;
  //  const int * const re = &temp;

//打印数据函数，使用的场景，通常用来修饰形参，防止误操作
void showValue(const int& v)
{
   // v = 5456;   // 加了 const 就不能修改了
    cout << "v = " << v << endl;

}


int main04()
{

    //int& ref = 10;
    // 错误 ，引用需要引用一个合法的内存空间。

    // 加入 const 后就不报错，编译器自动优化代码为：
    // int temp = 10;  const int& ref = temp; 

    const int& ref = 10;

    //ref = 100; 
    // 错误，加入const 后不可以修改变量

    cout << ref << endl;
    // 你操作不到 temp，但是操作ref也是一样的。

    int a = 10;

    showValue(a);

    cout << "a = " << a << endl;
    const int& ref2 = a;
    //ref2++;// const   不可修改
    system("pause");
    return EXIT_SUCCESS;
}