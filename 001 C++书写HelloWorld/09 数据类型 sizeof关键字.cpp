#include<iostream>
using namespace std;

int main()
{
	
	
	//语法 sizeof(数据类型 / 变量)
	// 
	//整型 ： short(2) int(4) long(4) long long(8)
	//整型大小比较 short < int <= long <= long long
	short num1 = 10;
	cout << "short占用内存空间为：" << sizeof(short) << endl;
	cout << "short占用内存空间为：" << sizeof(num1) << endl;
	
	int num2 = 10;

	cout << "int占用内存空间为：" << sizeof(int) << endl;
	cout << "int占用内存空间为：" << sizeof(num2) << endl;

	long num3 = 10;

	cout << "long占用内存空间为：" << sizeof(num3) << endl;

	
	long long num4 = 10;
	cout << "long long占用内存空间为：" << sizeof(num4) << endl;

	system("pause");

	return 0;
}