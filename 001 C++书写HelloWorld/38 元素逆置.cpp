

#include<iostream>
using namespace std;

int main()
{

	// 1,��ʼ������

	int arr[] = { 300,350,200,400,250 };


	// 2.�õ����鳤��-1
	// 3.�����м����������startλ�ã�����endλ��
	int end = sizeof(arr) / sizeof(arr[0]) - 1;  // ���鳤��-1�����һ��Ԫ���±�  
	
	int start = 0;
	int temp;
	cout << "ԭʼ����" << endl;
	for (int j = 0; j < (sizeof(arr) / sizeof(arr[0])); j++)
	{
		cout << arr[j] << endl;
	}

	// 3.��������

	for (; start < end;)
	{
		// 4������

		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		
		start++;
		end--;
	}
	cout << "������" << endl;
	for (int j = 0;j < (sizeof(arr) / sizeof(arr[0])); j++)
	{
		cout << arr[j] << endl;
	}
	



 	system("pause");
	return 0;
}