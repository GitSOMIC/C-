

#include<iostream>
using namespace std;

int main()
{

	// �߼������--�� ��
	int a = 10;

	cout << !a << endl;
	cout << !!a << endl;

	// �߼������--�� &&
	// ͬ��Ϊ�棬����Ϊ��

	int b = 10;
	int c = 10;

	cout << (b && c) << endl;
	b = 10;
	c = 0;
	cout << (b && c) << endl;
	b = 0;
	c = 0;
	cout << (b && c) << endl;

	//	�߼������--�� ||
	// ͬ��Ϊ��,����Ϊ��
	b = 10;
	c = 10;

	cout << (b || c) << endl;

	b = 0;
	c = 10;

	cout << (b || c) << endl;

	b = 0;
	c = 0;

	cout << (b || c) << endl;

	system("pause");

	return 0;
}