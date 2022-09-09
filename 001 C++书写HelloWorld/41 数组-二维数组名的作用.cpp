

#include<iostream>
using namespace std;

int main()
{

	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};


		// 1,可以查看占用内存空间大小
	cout << "二维数组占用的内存空间为：" << sizeof(arr) << endl;

	cout << "二维数组第一行占用内存为：" << sizeof(arr[0]) << endl;

	cout << "二维数组第一个元素内存为：" << sizeof(arr[0][0]) << endl;
		
		// 2，利用内存空间大小求数组行数列数

	cout << "二维数组行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	cout << "二维数组列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;


		// 3,可以查看二维数组的地址
	cout << "二维数组的首地址为：" << arr << endl;

	cout << "二维数组第一行首地址为：" << arr[0] << endl;
	
	cout << "二维数组第二行首地址为：" << arr[1] << endl;
	
		// 4,访问一个具体元素的地址用 &
	cout << "二维数组第一个元素地址为：" << &arr[0][0] << endl;
	cout << "二维数组第二个元素地址为：" << &arr[0][1] << endl;




	system("pause");
	return 0;
}