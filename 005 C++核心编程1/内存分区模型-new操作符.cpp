#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1，new的基本语法
int* func111()
{
    //在堆区创建整型数据
    //new返回的是 该数据类型的指针 ，用指针接收
    int* p = new int(10); //小括号内是初始值
    return p;
}
void test01()
{
    int* p = func111();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    // 堆区的数据，由程序员管理开辟，释放
    //如果想释放堆区的数据，利用关键字 delete 释放地址
    delete p;
    //    cout << *p << endl;  读取访问权限冲突，内存已经释放
                                //再次访问是非法

}

//2,在堆区用new开辟数组
void test02()
{
    //创建十个元素的整型数组，在堆区
   int* arr = new int[10];  //返回连续线性内存空间的首地址
   for (size_t i = 0; i < 10; i++)
   {
       arr[i] = i;
   }
  // delete[] arr;
   for (size_t i = 0; i < 10; i++)
   {
       cout << arr[i] << endl;
   }

   //释放数组 加[]在delete后
   delete[] arr;

}
int main()
{
    //test01();
    test02();
    system("pause");
    return EXIT_SUCCESS;
}