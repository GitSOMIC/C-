#include<iostream>
using namespace std;

int main()
{
	// 指针所占空间

	int a = 10;
	int* p = &a;

	// 在32位操作系统下，指针占4个字节，不论是什么数据类型
	// 在64位操作系统下，指针占8个字节，不论是什么数据类型

	cout << "sizeof(int *) = " << sizeof(int*) << endl;
	cout << "sizeof(float *) = " << sizeof(float*) << endl;
	cout << "sizeof(double *) = " << sizeof(double*) << endl;
	cout << "sizeof(char *) = " << sizeof(char*) << endl;

	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(float ) = " << sizeof(float) << endl;
	cout << "sizeof(double ) = " << sizeof(double) << endl;

	system("pause");
	return 0;
}
