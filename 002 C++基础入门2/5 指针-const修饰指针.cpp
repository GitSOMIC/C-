#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
    
    // 1������ָ��---- const ����ָ��
    // ָ��ָ���ֵ�����Ըģ�ָ���ָ����Ը�

    int a = 10;
    int b = 10;
    const int* p = &a;
    // *p = 20;����
    p = &b;// ��ȷ

    // 2��ָ�볣��---- const ���γ���
    // ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�



    int* const p2 = &a;
    *p2 = 100;//��ȷ
    // p2 = &b  //����


    // 3��const ����ָ��ͳ���
    // ָ���ָ�� �� ָ��ָ���ֵ �������Ը�
    const int* const p3 = &a;

    // p3 = &b;     // ����
    // *p3 = 100;     // ����



    // ���ɣ���const�Ҳ�����ŵ���ָ�뻹�ǳ���, ��ָ����ǳ���ָ�룬�ǳ�������ָ�볣��

    // ���ã��ں����β��ڣ���������ָ������Ӧ���ڴ�ռ�Ϊֻ�� ����������׳��

    system("pause");
    return EXIT_SUCCESS;
}