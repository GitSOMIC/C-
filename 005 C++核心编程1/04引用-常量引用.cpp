#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//    int temp = 10;
  //  const int * const re = &temp;

//��ӡ���ݺ�����ʹ�õĳ�����ͨ�����������βΣ���ֹ�����
void showValue(const int& v)
{
   // v = 5456;   // ���� const �Ͳ����޸���
    cout << "v = " << v << endl;

}


int main04()
{

    //int& ref = 10;
    // ���� ��������Ҫ����һ���Ϸ����ڴ�ռ䡣

    // ���� const ��Ͳ������������Զ��Ż�����Ϊ��
    // int temp = 10;  const int& ref = temp; 

    const int& ref = 10;

    //ref = 100; 
    // ���󣬼���const �󲻿����޸ı���

    cout << ref << endl;
    // ��������� temp�����ǲ���refҲ��һ���ġ�

    int a = 10;

    showValue(a);

    cout << "a = " << a << endl;
    const int& ref2 = a;
    //ref2++;// const   �����޸�
    system("pause");
    return EXIT_SUCCESS;
}