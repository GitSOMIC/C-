
#include<iostream>
using namespace std;

int main()
{

	// ���鶨��ʱ������Ҫ�г�ʼ����


	/*
		1. ` ��������  ������[ ���鳤�� ]; `
		2. `��������  ������[ ���鳤�� ] = { ֵ1��ֵ2 ...};`
		3. `��������  ������[ ] = { ֵ1��ֵ2 ...};`
	*/

	// 1. ��������  ������[ ���鳤�� ];
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

	//2. `��������  ������[ ���鳤�� ] = { ֵ1��ֵ2 ...};

	int arr2[5] = { 10, 20, 30, 40, 50 }; // �����ʼֵû�в��룬����0���롣
	
										  
										  
	// ����ѭ�� ��������е�Ԫ��

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