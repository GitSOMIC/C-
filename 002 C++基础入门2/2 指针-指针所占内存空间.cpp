#include<iostream>
using namespace std;

int main()
{
	// ָ����ռ�ռ�

	int a = 10;
	int* p = &a;

	// ��32λ����ϵͳ�£�ָ��ռ4���ֽڣ�������ʲô��������
	// ��64λ����ϵͳ�£�ָ��ռ8���ֽڣ�������ʲô��������

	cout << "sizeof(int *) = " << sizeof(int*) << endl;
	cout << "sizeof(float *) = " << sizeof(float*) << endl;
	cout << "sizeof(double *) = " << sizeof(double*) << endl;
	cout << "sizeof(char *) = " << sizeof(char*) << endl;

	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(float ) = " << sizeof(float) << endl;
	cout << "sizeof(double ) = " << sizeof(double) << endl;

	system("pause");
	return 0;
}
