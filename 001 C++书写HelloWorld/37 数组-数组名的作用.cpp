

#include<iostream>
using namespace std;

int main()
{

	// 数组名的用途
	// 1.可以通过数组名统计整个数组  *占用内存大小* sizeof()
	// 2，可以通过数组名查看数组的  *首地址*
	// 
	// 
	
	int a = 0;
	
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };


	cout << "int值为：" << a << endl;
	cout << "int型占用内存空间为：" << sizeof(a) << endl;
	cout << "a的地址为：" << &a << endl;  // 用 & 查地址
	
	
	cout << "整个数组占用内存空间为：" << sizeof(arr) << endl;
	cout << "数组中第一个元素占用内存空间为：" << sizeof(arr[0]) << endl;

	// 2，可以通过数组名查看数组的  *首地址*
	

	cout << "数组的首地址为：" << arr << endl;  // 数组名查看数组的  *首地址*
	cout << "数组中第一个元素的地址为：" << &arr[0] << endl; // 数组的首地址 == 第一个元素地址
	cout << "数组中第二个元素的地址为：" << &arr[1] << endl;

	cout << "数组的首地址（D）为：" << (long long)arr << endl;  
	
	// 强制类型转换 不（int） 直接输出是把2进制转16进制，（int）转为10进制
	// 用(long long)不溢出

	cout << "数组中第一个元素的地址（D）为：" << (long long)&arr[0] << endl;
	cout << "数组中第二个元素的地址（D）为：" << (long long)&arr[1] << endl;// 数组是连续的线性空间，内存地址连续

	cout << "数组中元素的个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	// 利用数组中一个元素所占用的内存空间 除÷ 整个数组所占用的内存空间 得= 数组中元素的个数

	system("pause");
	return 0;
}