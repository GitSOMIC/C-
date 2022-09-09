

#include<iostream>
using namespace std;

int main()
{

	// 1,初始化数组

	int arr[] = { 300,350,200,400,250 };


	// 2.得到数组长度-1
	// 3.定义中间变量，数组start位置，数组end位置
	int end = sizeof(arr) / sizeof(arr[0]) - 1;  // 数组长度-1是最后一个元素下标  
	
	int start = 0;
	int temp;
	cout << "原始数组" << endl;
	for (int j = 0; j < (sizeof(arr) / sizeof(arr[0])); j++)
	{
		cout << arr[j] << endl;
	}

	// 3.遍历数组

	for (; start < end;)
	{
		// 4，交换

		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		
		start++;
		end--;
	}
	cout << "互换后" << endl;
	for (int j = 0;j < (sizeof(arr) / sizeof(arr[0])); j++)
	{
		cout << arr[j] << endl;
	}
	



 	system("pause");
	return 0;
}