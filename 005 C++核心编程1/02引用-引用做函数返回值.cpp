#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// ���ؾֲ���������
int& test01()
{
    int a = 10; //�ֲ�����
    return a;
}
//���ؾ�̬��������
int& test02()
{
    static int a = 20;
    return a;
}




int main()
{
    //��Ҫ���ؾֲ�����������
    int& ref = test01();
    cout << "ref = " << ref << endl;
    cout << "ref = " << ref << endl;

    //�����������ֵ����ô���뷵������
    int& ref2 = test02();
    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;
    // ��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
    test02() = 10000;  // test02��������a�����ã�a���޸�Ϊ10000

    cout << "ref2 = " << ref2 << endl;
    cout << "test02() " << test02() << endl;
    cout << "ref2 = " << ref2 << endl;


    system("pause");
    return EXIT_SUCCESS;
}