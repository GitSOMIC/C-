#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int func01(int a, int b = 10, int c = 20)
{
    return a + b + c;
}
//ע������
// 1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô���λ������
// �����Ҷ�������Ĭ�ϲ���
//int func02(int a, int b = 20, int c)
//{
//    return a + b + c;
//}

//2���������������Ĭ�ϲ������������壨ʵ�֣��Ͳ�����Ĭ�ϲ�������֮��Ȼ
// ��ֹ�����ԣ�������ʵ��ֻ����һ����Ĭ�ϲ���
int func03(int a , int b );

int func03(int a = 10, int b = 20)
{
    return a + b;
}

int main05()
{

    cout << func03() << endl;
    cout << func03(100,200) << endl;

    system("pause");
    return EXIT_SUCCESS;
}