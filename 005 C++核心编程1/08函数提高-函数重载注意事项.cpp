#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



//1��������Ϊ������������
void func(int& a)
{
    cout << "func(int& a)" << endl;
}
void func(const int& a)   // int temp = 100��const int& a =temp��
{
    cout << "func(const int& a)" << endl;
}



//2������������������Ĭ�ϲ���   �� *�������ر���ʹ��Ĭ�ϲ���*  ��
void func2(int a, int b = 10)
{
    cout << "func(int a, int b = 10)" << endl;
}
void func2(int a)
{
    cout << "func(int a)" << endl;
}


int main08()
{
    //1��������Ϊ������������
    int a = 10;
    func(a);    // ���� ��const
    func(100);  // ���� ��const

    //2������������������Ĭ�ϲ���
   // func2(10);//����Ĭ�ϲ������������ԣ�
                //����ʵ�����뺯�������б�ƥ�䣬��Ҫ����
    func2(12, 32);


    system("pause");
    return EXIT_SUCCESS;
}