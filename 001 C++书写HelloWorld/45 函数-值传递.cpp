#include<iostream>
#include<string>
using namespace std;

// ��νֵ���ݣ����Ǻ�������ʱʵ�ν���ֵ������β�
// ����βη����ı䣬������Ӱ��ʵ��


void swap(int num1, int num2) // û�з���ֵ�ĺ��� ����ֵ����Ϊ void
{
	cout << "����ǰ" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	return;
	// ����û�з���ֵ��ʱ�򣬿ɲ�дreturn��
}


int main()
{
	int a = 10, b = 20;

	swap(a, b);

	cout << "mian�е� a = " << a << endl;   // ����βη����ı䣬������Ӱ��ʵ��
	cout << "mian�е� b = " << b << endl;	// �β�num1 nmu2������,ʵ��a��bû�б�

											 // �β�ȡ����ʵ����ͬҲ�ǲ������ε�

	system("pause");
	return 0;
}


/*
//ֵ����
void swap1(int a, int b)         // �β�ȡ����ʵ����ͬҲ�ǲ������ε�
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;

	cout << "b = " << b << endl;
}


int main() {

	int a = 10;
	int b = 20;
	swap1(a, b); // ֵ���ݲ���ı�ʵ��

	cout << "a = " << a << endl;

	cout << "b = " << b << endl;

	system("pause");

	return 0;
}
*/
