#include<iostream>
using namespace std;

int main()
{
	
	
	//�﷨ sizeof(�������� / ����)
	// 
	//���� �� short(2) int(4) long(4) long long(8)
	//���ʹ�С�Ƚ� short < int <= long <= long long
	short num1 = 10;
	cout << "shortռ���ڴ�ռ�Ϊ��" << sizeof(short) << endl;
	cout << "shortռ���ڴ�ռ�Ϊ��" << sizeof(num1) << endl;
	
	int num2 = 10;

	cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(int) << endl;
	cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(num2) << endl;

	long num3 = 10;

	cout << "longռ���ڴ�ռ�Ϊ��" << sizeof(num3) << endl;

	
	long long num4 = 10;
	cout << "long longռ���ڴ�ռ�Ϊ��" << sizeof(num4) << endl;

	system("pause");

	return 0;
}