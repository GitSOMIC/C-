#include<iostream>
using namespace std;

int main()
{
	//1,ǰ�õ���
	//���ñ�����1�� Ȼ����б��ʽ����
	int a2 = 10;
	int b2 = ++a2 * 10;

	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;

	//2,���õ���
	//�Ƚ��б��ʽ���㣬 Ȼ���ñ�����1

	int a3 = 10;
	int b3 = a3++ * 10;

	cout << "a3 = " << a3 << endl;
	cout << "b3 = " << b3 << endl;


	system("pause");

	return 0;
}