#include<iostream>
using namespace std;




// 如果定义在mian（）函数后面要使用函数的声明
// 函数的声明，提前告诉编译器函数的存在，可以利用函数的声明
// 声明可以多次，定义只能一次

//声明
int max(int a, int b);
int max(int a, int b);

int main()
{
	int a = 100;
	int b = 200;

	cout << max(a, b) << endl;

	system("pause");
	return 0;
}


//定义
int max(int a, int b)
{
	return a > b ? a : b;
}



