

#include<iostream>
#include<string>
using namespace std;


/*
	返回值类型 函数名 （参数列表）
	{
		函数体语句

		return 表达式
	}
*/

// 定义一个加法函数

int add(int num1, int num2)
{
	int sum = num1 + num2;

	return sum;
}



int main()
{


	cout << add(1, 2) << endl;



	system("pause");
	return 0;
}