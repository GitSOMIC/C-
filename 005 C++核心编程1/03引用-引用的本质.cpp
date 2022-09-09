#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 结论：C++推荐用引用技术，因为语法方便，
// 引用本质是指针常量，但是所有的指针操作编译器都帮我们做了
// 
// 使用时不要考虑指针常量，进行抽象，引用就是引用，把 ref 当 a 。





// 发现是引用，转换为 int * const ref = &a；
void func(int& ref)
{
    ref = 100;   // ref 是引用， 转换为 * ref = 100

}



int main03()
{
    int a = 10;

    //自动转换为 int* const ref = &a;  
    int& ref = a;
    // 指针常量是指针指向不可更改，也说明为什么引用不可更改
    ref = 20; // 内部发现ref是引用，自动帮我们转换为： * ref = 20;

    cout << "a: " << a << endl;
    cout << "ref: " << ref << endl;

    func(a);

    cout << "ref: " << ref << endl;

    system("pause");
    return EXIT_SUCCESS;
}