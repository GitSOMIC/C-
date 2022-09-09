#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


// 野指针：指针变量指向非法的内存空间（没有访问权限）
// 在程序中，尽量避免出现野指针 

int main()
{
    int* p = (int*)0x1100;
    int* p1 = 10;
    // 访问野指针报错
    cout << *p << endl;

    // 空指针和野指针都不是我们申请的空间，因此不要访问。
     

    system("pause");
    return EXIT_SUCCESS;
}