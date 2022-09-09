#include<iostream>
using namespace std;

int main()
{
	// 1,指针的定义
	int a = 10;  

	// 指针定义语法：数据类型 * 变量名；

	int * p;

	// 指针变量赋值

	p = &a; // 指针指向变量a的地址

	cout << &a << endl;     // 打印数据a 的地址
	cout << p << endl;   // 打印指针变量p

	// 2，指针的使用 (指针变量解引用)
	// 指针前加 * 代表解引用，找到指针指向的内存中的数据

	cout << "*p = " << *p << endl;
	

	// *p 将p变量的内容取出，当成地址看待，找到该地址1对应的内存空间。 

	system("pause");
	return 0;
}