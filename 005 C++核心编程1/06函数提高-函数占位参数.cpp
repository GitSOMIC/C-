#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;




//����ռλ����
void func1(int a, int)
{
    cout << "this is func" << a << endl;

}
//ռλ����Ҳ������Ĭ�ϲ���

void func2(int a, int = 10)
{
    cout << "this is func" << a << endl;

}

int main06()
{
    func1(10, 10);//ռλ���������
    func2(10);//ռλ������Ĭ�ϲ������


    system("pause");
    return EXIT_SUCCESS;
}