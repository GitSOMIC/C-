#include<iostream>
using namespace std;

int main()
{


	// 1�������� float  (4�ֽ�)
	// 2��˫���� double  (8�ֽ�)
	// Ĭ������� ���һ��С��������ʾ��6λ��Ч����


	float f1 = 3.14f;  //3.14z����С����Ĭ��Ϊdouble�����Լ�fʡȥһ��ת��
	cout << "f1 = " << f1 << endl;
	double d1 = 3.14;
	cout << "d1 = " << d1 << endl;

	// ͳ��float and double ռ�õ��ڴ�ռ�

	cout << "floatռ���ڴ�ռ�Ϊ��" << sizeof(float) << endl;
	cout << "doubleռ���ڴ�ռ�Ϊ��" << sizeof(double) << endl;


	//��ѧ������

	float f2 = 3e2;  //3 * 10^2

	float f3 = 3e-2;  // 3 * 10^(-2)

	cout << "float:" << f2 << endl;
	cout << "float:" << f3 << endl;






	system("pause");

	return 0;
}