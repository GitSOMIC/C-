

#include<iostream>
using namespace std;

int main()
{

	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};


		// 1,���Բ鿴ռ���ڴ�ռ��С
	cout << "��ά����ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr) << endl;

	cout << "��ά�����һ��ռ���ڴ�Ϊ��" << sizeof(arr[0]) << endl;

	cout << "��ά�����һ��Ԫ���ڴ�Ϊ��" << sizeof(arr[0][0]) << endl;
		
		// 2�������ڴ�ռ��С��������������

	cout << "��ά��������Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;

	cout << "��ά��������Ϊ��" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;


		// 3,���Բ鿴��ά����ĵ�ַ
	cout << "��ά������׵�ַΪ��" << arr << endl;

	cout << "��ά�����һ���׵�ַΪ��" << arr[0] << endl;
	
	cout << "��ά����ڶ����׵�ַΪ��" << arr[1] << endl;
	
		// 4,����һ������Ԫ�صĵ�ַ�� &
	cout << "��ά�����һ��Ԫ�ص�ַΪ��" << &arr[0][0] << endl;
	cout << "��ά����ڶ���Ԫ�ص�ַΪ��" << &arr[0][1] << endl;




	system("pause");
	return 0;
}