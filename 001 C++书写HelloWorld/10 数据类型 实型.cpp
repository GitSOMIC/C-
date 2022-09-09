#include<iostream>
using namespace std;

int main()
{


	// 1，单精度 float  (4字节)
	// 2，双精度 double  (8字节)
	// 默认情况下 输出一个小数，会显示出6位有效数字


	float f1 = 3.14f;  //3.14z这种小数会默认为double型所以加f省去一次转换
	cout << "f1 = " << f1 << endl;
	double d1 = 3.14;
	cout << "d1 = " << d1 << endl;

	// 统计float and double 占用的内存空间

	cout << "float占用内存空间为：" << sizeof(float) << endl;
	cout << "double占用内存空间为：" << sizeof(double) << endl;


	//科学计数法

	float f2 = 3e2;  //3 * 10^2

	float f3 = 3e-2;  // 3 * 10^(-2)

	cout << "float:" << f2 << endl;
	cout << "float:" << f3 << endl;






	system("pause");

	return 0;
}