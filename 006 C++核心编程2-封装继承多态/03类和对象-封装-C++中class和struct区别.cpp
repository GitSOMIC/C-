#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//C++��struct��classΨһ����������Ĭ�Ϸ���Ȩ�޲�ͬ
//����:
//struct Ĭ��Ȩ��Ϊ���� public
//class Ĭ��Ȩ��Ϊ˽�� private

class C1
{
    //û��ָ��Ȩ����Ĭ��˽��private
    int m_a;
};
struct C2
{

    int m_a;
};

int main03()
{
    C1 c1;
    //c1.m_a;

    C2 c2;
    c2.m_a=100;


    system("pause");
    return EXIT_SUCCESS;
}