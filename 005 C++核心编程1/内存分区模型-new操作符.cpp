#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1��new�Ļ����﷨
int* func111()
{
    //�ڶ���������������
    //new���ص��� ���������͵�ָ�� ����ָ�����
    int* p = new int(10); //С�������ǳ�ʼֵ
    return p;
}
void test01()
{
    int* p = func111();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    // ���������ݣ��ɳ���Ա�����٣��ͷ�
    //������ͷŶ��������ݣ����ùؼ��� delete �ͷŵ�ַ
    delete p;
    //    cout << *p << endl;  ��ȡ����Ȩ�޳�ͻ���ڴ��Ѿ��ͷ�
                                //�ٴη����ǷǷ�

}

//2,�ڶ�����new��������
void test02()
{
    //����ʮ��Ԫ�ص��������飬�ڶ���
   int* arr = new int[10];  //�������������ڴ�ռ���׵�ַ
   for (size_t i = 0; i < 10; i++)
   {
       arr[i] = i;
   }
  // delete[] arr;
   for (size_t i = 0; i < 10; i++)
   {
       cout << arr[i] << endl;
   }

   //�ͷ����� ��[]��delete��
   delete[] arr;

}
int main()
{
    //test01();
    test02();
    system("pause");
    return EXIT_SUCCESS;
}