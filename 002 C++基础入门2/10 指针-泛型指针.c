#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{

    
    int a = 345;
    
    char ch = 'R';

    void* p0; // ����ָ�룬����ָ�� 
    void* p1; // ���Խ�������һ�ֱ�����ַ����ʹ��ʱ���������ǿ������ת�������廯
    p0 = &a;
    p1 = &ch;


    printf("%d\n", *(int*)p0);
    // cout << *(int*)p0 << endl;
    // cout << (int*)p0 << endl; 16���� ��Ϊû��%d

    printf("%d\n", *(char*)p1);
    printf("%c\n", *(char*)p1);

    system("pause");
    return EXIT_SUCCESS;
}