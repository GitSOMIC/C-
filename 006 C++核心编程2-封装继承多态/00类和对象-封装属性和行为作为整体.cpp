#include<iostream>
using namespace std;
//Բ����
const double PI = 3.14;

//1����װ������
//�����Ժ���Ϊ��Ϊһ�����壬�������������е�����

//��װһ��Բ�࣬��Բ���ܳ�
//class�������һ���࣬������ŵ�������
class Circle
{
public:  //����Ȩ��  ������Ȩ��

	//����
	int m_r;//�뾶

	//��Ϊ
	//��ȡ��Բ���ܳ�
	double calculateZC()
	{
		//2 * pi  * r
		//��ȡԲ���ܳ�
		return  2 * PI * m_r;
	}
};

int main00() {

	//ͨ��Բ�࣬����Բ�Ķ���
	// c1����һ�������Բ
	Circle c1;
	c1.m_r = 10; //��Բ����İ뾶 ���и�ֵ����

	//2 * pi * 10 = = 62.8
	cout << "Բ���ܳ�Ϊ�� " << c1.calculateZC() << endl;

	system("pause");

	return 0;
}