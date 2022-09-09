#include<iostream>
#include<string>
using namespace std;

// 1，无参无返
// 2，有参无返
// 3，无参有返
// 4，有参有返
//  有参： 括号内有内容（）
// 有反： 返回值类型不是void 且有return xx ；
// 


// 1，无参无返
void test01()  //void a = 10; //无类型不可以创建变量,原因无法分配内存
{
	cout << "this is test01" << endl;
}

// 2，有参无返
void test02(int a)
{
	cout << "this is test02" << endl;
	cout << "a = " << a << endl;
}
// 3，无参有返
int test03()
{
	cout << "this is test03" << endl;
	return 10000;
}

// 4，有参有返

int test04(int a)
{
	cout << "this is test04" << endl;
	return a;
}





int main()
{
	test01();

	test02(2);

	int c = test03();
	cout << c << endl;

	cout << test04(4) << endl;


	system("pause");
	return 0;
}