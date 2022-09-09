#include<iostream>
#include<string>
using namespace std;

// 所谓值传递，就是函数调用时实参将数值传入给形参
// 如果形参发生改变，并不会影响实参


void swap(int num1, int num2) // 没有返回值的函数 返回值类型为 void
{
	cout << "交换前" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	return;
	// 函数没有返回值的时候，可不写return；
}


int main()
{
	int a = 10, b = 20;

	swap(a, b);

	cout << "mian中的 a = " << a << endl;   // 如果形参发生改变，并不会影响实参
	cout << "mian中的 b = " << b << endl;	// 形参num1 nmu2交换了,实参a，b没有变

											 // 形参取名和实参相同也是不会修饰的

	system("pause");
	return 0;
}


/*
//值传递
void swap1(int a, int b)         // 形参取名和实参相同也是不会修饰的
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;

	cout << "b = " << b << endl;
}


int main() {

	int a = 10;
	int b = 20;
	swap1(a, b); // 值传递不会改变实参

	cout << "a = " << a << endl;

	cout << "b = " << b << endl;

	system("pause");

	return 0;
}
*/
