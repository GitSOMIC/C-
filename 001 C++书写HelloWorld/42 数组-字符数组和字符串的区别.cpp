#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{

    // �ַ����飺
    char str1[5] = { 'h', 'e', 'l', 'l', 'o' };

    //�ַ�����
    char str2[6] = { 'h', 'e', 'l', 'l', 'o', '\0'};
    char str3[] = "hello";// "xxx" ���Լ���0   //��str3 �� str2 �ȼ�


    // printf("%s");	ʹ��printf��ӡ�ַ�����ʱ�򣬱������� \0 ������

    printf("%s\n", str1);  // ��%s������ַ��� ������0��Խ������ �ַ������� ѭ����%c���
    printf("%s\n", str2);
    printf("%s\n", str3);

    system("pause");
    return EXIT_SUCCESS;
}