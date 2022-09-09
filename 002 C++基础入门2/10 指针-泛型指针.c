#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{

    
    int a = 345;
    
    char ch = 'R';

    void* p0; // 万能指针，泛型指针 
    void* p1; // 可以接收任意一种变量地址，在使用时必须借助“强制类型转换”具体化
    p0 = &a;
    p1 = &ch;


    printf("%d\n", *(int*)p0);
    // cout << *(int*)p0 << endl;
    // cout << (int*)p0 << endl; 16进制 因为没有%d

    printf("%d\n", *(char*)p1);
    printf("%c\n", *(char*)p1);

    system("pause");
    return EXIT_SUCCESS;
}