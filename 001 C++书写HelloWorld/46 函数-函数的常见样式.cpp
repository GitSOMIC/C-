#include<iostream>
#include<string>
using namespace std;

// 1���޲��޷�
// 2���в��޷�
// 3���޲��з�
// 4���в��з�
//  �вΣ� �����������ݣ���
// �з��� ����ֵ���Ͳ���void ����return xx ��
// 


// 1���޲��޷�
void test01()  //void a = 10; //�����Ͳ����Դ�������,ԭ���޷������ڴ�
{
	cout << "this is test01" << endl;
}

// 2���в��޷�
void test02(int a)
{
	cout << "this is test02" << endl;
	cout << "a = " << a << endl;
}
// 3���޲��з�
int test03()
{
	cout << "this is test03" << endl;
	return 10000;
}

// 4���в��з�

int test04(int a)
{
	cout << "this is test04" << endl;
	return a;
}





int main()
{
	test01();

	test02(2);

	int c = test03();
	cout << c << endl;

	cout << test04(4) << endl;


	system("pause");
	return 0;
}