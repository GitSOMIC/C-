#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// ���ۣ�C++�Ƽ������ü�������Ϊ�﷨���㣬
// ���ñ�����ָ�볣�����������е�ָ�����������������������
// 
// ʹ��ʱ��Ҫ����ָ�볣�������г������þ������ã��� ref �� a ��





// ���������ã�ת��Ϊ int * const ref = &a��
void func(int& ref)
{
    ref = 100;   // ref �����ã� ת��Ϊ * ref = 100

}



int main03()
{
    int a = 10;

    //�Զ�ת��Ϊ int* const ref = &a;  
    int& ref = a;
    // ָ�볣����ָ��ָ�򲻿ɸ��ģ�Ҳ˵��Ϊʲô���ò��ɸ���
    ref = 20; // �ڲ�����ref�����ã��Զ�������ת��Ϊ�� * ref = 20;

    cout << "a: " << a << endl;
    cout << "ref: " << ref << endl;

    func(a);

    cout << "ref: " << ref << endl;

    system("pause");
    return EXIT_SUCCESS;
}