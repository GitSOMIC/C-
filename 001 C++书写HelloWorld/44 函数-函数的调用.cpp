

#include<iostream>
#include<string>
using namespace std;


// ����ӷ�����
// ���������ʱ��num1 �� num2��û����ʵ������
// ��ֻ��һ����ʽ�ϵĲ���������β�

// ��main�����ⶨ��
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}



int main()
{
	//main�����е��ð�add����

	int a = 10;
	int b = 20;

	//���������﷨���������ƣ� ���� ��
	// a��b ��Ϊʵ�ʲ��������ʵ��

	int c = add(a, b);

	cout << "c = " << c << endl;

	system("pause");
	return 0;
}