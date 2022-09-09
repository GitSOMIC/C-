#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{

    // 字符数组：
    char str1[5] = { 'h', 'e', 'l', 'l', 'o' };

    //字符串：
    char str2[6] = { 'h', 'e', 'l', 'l', 'o', '\0'};
    char str3[] = "hello";// "xxx" 会自己补0   //与str3 与 str2 等价


    // printf("%s");	使用printf打印字符串的时候，必须碰到 \0 结束。

    printf("%s\n", str1);  // 用%s是输出字符串 碰不到0会越界乱码 字符数组用 循环和%c输出
    printf("%s\n", str2);
    printf("%s\n", str3);

    system("pause");
    return EXIT_SUCCESS;
}