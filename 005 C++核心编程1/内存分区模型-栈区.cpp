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
    //  用x86才看得出来
    // x64 全是11
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