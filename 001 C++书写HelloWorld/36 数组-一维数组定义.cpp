
#include<iostream>
using namespace std;

int main()
{

	// 数组定义时，必须要有初始长度


	/*
		1. ` 数据类型  数组名[ 数组长度 ]; `
		2. `数据类型  数组名[ 数组长度 ] = { 值1，值2 ...};`
		3. `数据类型  数组名[ ] = { 值1，值2 ...};`
	*/

	// 1. 数据类型  数组名[ 数组长度 ];
	int arr[5];
	arr[0] = 00;
	arr[1] = 10;
	arr[2] = 20;
	arr[3] = 30;
	arr[4] = 40;

	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;

	//2. `数据类型  数组名[ 数组长度 ] = { 值1，值2 ...};

	int arr2[5] = { 10, 20, 30, 40, 50 }; // 如果初始值没有补齐，会用0补齐。
	
										  
										  
	// 利用循环 输出数组中的元素

	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;
	}

	int arr3[] = { 90, 80, 70, 60, 59, 48, 567, 5 };

	for (int j = 0; j < 8; j++)
	{
		cout << arr3[j] << endl;
	}

	system("pause");
	return 0;
}