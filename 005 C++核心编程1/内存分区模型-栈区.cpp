#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int* func()
{    
    int a = 10;
    return &a;
}
int func2()
{
    int f = 11;
    return f;
}

int main()
{
    //  ��x86�ſ��ó���
    // x64 ȫ��11
    int* p = func();
    int f = func2();
    cout << *p << endl;
    cout << *p << endl;

    cout << f << endl;
    cout << f << endl;
    cout << f << endl;

    system("pause");
    return EXIT_SUCCESS;
}