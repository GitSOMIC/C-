#include<iostream>
using namespace std;
#include<string>
int main()
{
	//加减乘除
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; // C/C++ 中两个整数相除，结果依旧是整数，项下取整。

	int a2 = 10;
	int b2 = 20;

	cout << a2 / b2 << endl;
	
	int a3 = 10;
	int b3 = 0;

	//cout << a3 / b3 << endl;// 两个数字相除，除数不可为0，取模运算也不行；

	//两个小数可以相除吗？
	double d1 = 0.5;
	double d2 = 0.25;
	double d3 = 0.22;
	cout << d1 / d2 << endl;
	cout << d1 / d3 << endl;



	system("pause");

	return 0;
}