

#include<iostream>
using namespace std;

int main()
{

	// 逻辑运算符--非 ！
	int a = 10;

	cout << !a << endl;
	cout << !!a << endl;

	// 逻辑运算符--与 &&
	// 同真为真，其余为假

	int b = 10;
	int c = 10;

	cout << (b && c) << endl;
	b = 10;
	c = 0;
	cout << (b && c) << endl;
	b = 0;
	c = 0;
	cout << (b && c) << endl;

	//	逻辑运算符--或 ||
	// 同假为假,其余为真
	b = 10;
	c = 10;

	cout << (b || c) << endl;

	b = 0;
	c = 10;

	cout << (b || c) << endl;

	b = 0;
	c = 0;

	cout << (b || c) << endl;

	system("pause");

	return 0;
}