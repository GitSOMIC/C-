#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);


    int* p = arr;


    for (size_t j = 0; j < n; j++)
    {

        cout << *(arr + j) << endl;      //������arr�ǵ�ַ  arr[j] == *(arr + j) 
    }


    cout << " *arr = " << *arr << endl;  //������arr�ǵ�ַ ��*��������



    for (size_t i = 0; i < n; i++)
    {
        cout << p[i] << endl;           // arr[0] == *(arr+0) == p[0] == *(p+0)
    }

    /*
    ָ������������
        1��ָ���Ǳ������������ǳ���
        2��sizeof��ָ�룩===��4B/8B
           sizeof�����飩===�������ʵ���ֽ�����
    */ 

    system("pause");
    return EXIT_SUCCESS;
}