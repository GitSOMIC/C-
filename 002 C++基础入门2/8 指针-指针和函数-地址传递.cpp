#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//1��ֵ����           ����ʵ�����ββ����ǹ���һ����ͬ���ڴ�
int swap01(int a, int b)
{
    int temp01 = a;
    a = b;
    b = temp01;
    return 0;
}
// 2,��ַ����      ֻ��ͨ��ָ������òſ�������ʵ�ֶ�ʵ�����ݵĸı䣬
                   //��Ϊ��ʱʵ�����βι���ͬһ��ַ��Ԫ���βθı�ֵ�ˣ�ʵ����ȻҲҪ��
int swap02(int* p1, int* p2)
{
    int temp02 = *p1;
    *p1 = *p2;
    *p2 = temp02;
    return 0;
}

int main()
{




    // ָ��ͺ���
  
    int a = 10;
    int b = 20;
    //1��ֵ����    
    swap01(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // 2,��ַ����  
    cout << "-------------------------------" <<endl;
    swap02(&a, &b);  // ��Ҫ & ȡ��ַ

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;



    system("pause");
    return EXIT_SUCCESS;
}