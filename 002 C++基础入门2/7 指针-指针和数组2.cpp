#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);


    int* p = arr;


    for (size_t j = 0; j < n; j++)
    {

        cout << *(arr + j) << endl;      //数组名arr是地址  arr[j] == *(arr + j) 
    }


    cout << " *arr = " << *arr << endl;  //数组名arr是地址 用*做解引用



    for (size_t i = 0; i < n; i++)
    {
        cout << p[i] << endl;           // arr[0] == *(arr+0) == p[0] == *(p+0)
    }

    /*
    指针和数组的区别：
        1，指针是变量，数组名是常量
        2，sizeof（指针）===》4B/8B
           sizeof（数组）===》数组的实际字节数。
    */ 

    system("pause");
    return EXIT_SUCCESS;
}