
#include<iostream>
using namespace std;

int main()
{
	int arr[] = { 2,4,0,5,7,1,3,8,9 };

	int temp;

	int lenth = sizeof(arr) / sizeof(arr[0]); //元素个数

	// 总排序轮数 = 元素个数 - 1
	for (int i = 0; i < lenth - 1; i++)   // 从0开始到  lenth - 1  是<小于 从1开始是<=小于等于。
											// 数组下标从0开始，只能是<小于了。
	{
		// 内层对比循环次数 = 元素个数 - 当前轮数 - 1
		for (int j = 0; j < lenth - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;



			}


		}


	}

	for (int k = 0; k < lenth; k++)
	{
		cout << arr[k] << endl;

	}










	system("pause");
	return 0;


}