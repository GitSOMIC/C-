#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
    
    // 1，常量指针---- const 修饰指针
    // 指针指向的值不可以改，指针的指向可以改

    int a = 10;
    int b = 10;
    const int* p = &a;
    // *p = 20;错误
    p = &b;// 正确

    // 2，指针常量---- const 修饰常量
    // 指针的指向不可以改，指针指向的值可以改



    int* const p2 = &a;
    *p2 = 100;//正确
    // p2 = &b  //错误


    // 3，const 修饰指针和常量
    // 指针的指向 和 指针指向的值 都不可以改
    const int* const p3 = &a;

    // p3 = &b;     // 错误
    // *p3 = 100;     // 错误



    // 技巧：看const右侧紧跟着的是指针还是常量, 是指针就是常量指针，是常量就是指针常量

    // 常用；在函数形参内，用来限制指针所对应的内存空间为只读 提升函数健壮性

    system("pause");
    return EXIT_SUCCESS;
}