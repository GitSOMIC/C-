#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//C++中struct和class唯一的区别在于默认访问权限不同
//区别:
//struct 默认权限为公共 public
//class 默认权限为私有 private

class C1
{
    //没有指定权限是默认私有private
    int m_a;
};
struct C2
{

    int m_a;
};

int main03()
{
    C1 c1;
    //c1.m_a;

    C2 c2;
    c2.m_a=100;


    system("pause");
    return EXIT_SUCCESS;
}