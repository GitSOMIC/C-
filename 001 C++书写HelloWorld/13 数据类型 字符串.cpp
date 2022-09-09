#include<iostream>
using namespace std;

#include<string>

int main()
{
	//1，C风格字符串
	// char 字符串名[] = "" 双引号


	char str[] = "hello world";
	cout << str << endl;

	// 2，C++风格字符串
	//用C++风格需要包含头文件  #include<string>
	//stirng 变量名 = ""


	string str2 = "hello world";
	cout << str2 << endl;


	system("pause");

	return 0;
}