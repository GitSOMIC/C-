#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//1，值传递           它们实参与形参并不是共享一段相同的内存
int swap01(int a, int b)
{
    int temp01 = a;
    a = b;
    b = temp01;
    return 0;
}
// 2,地址传递      只有通过指针和引用才可以真正实现对实参内容的改变，
                   //因为此时实参与形参共享同一地址单元，形参改变值了，实参自然也要改
int swap02(int* p1, int* p2)
{
    int temp02 = *p1;
    *p1 = *p2;
    *p2 = temp02;
    return 0;
}

int main()
{




    // 指针和函数
  
    int a = 10;
    int b = 20;
    //1，值传递    
    swap01(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // 2,地址传递  
    cout << "-------------------------------" <<endl;
    swap02(&a, &b);  // 需要 & 取地址

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;



    system("pause");
    return EXIT_SUCCESS;
}