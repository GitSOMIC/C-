#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//������������ͬ����߸�����
//������������������
//1��ͬһ��������
//2������������ͬ
//
//3�������������Ͳ�ͬ�����߸�����ͬ������˳��ͬ

//��������ֵ��������Ϊ������������


void func()
{
    cout << "func�ĵ���" << endl;
}
void func(int a)
{
    cout << "func(int a)�ĵ���" << endl;
}
void func(double a)
{
    cout << "func�ĵ���(double a)" << endl;
}
void func(int a,double b)
{
    cout << "func�ĵ���(int a,double b)" << endl;
}
void func(double a,int b)
{
    cout << "func�ĵ���(double a,int b)" << endl;
}
//��������ֵ���Ͳ�������Ϊ������������
//int func(double a,int b)
//{
//    cout << "func�ĵ���(double a,int b)" << endl;
//}



int main07()
{
    func();
    func(10);
    func(3.122);
    func(10,2.546);
    func(2.645,45);
    
    system("pause");
    return EXIT_SUCCESS;
}