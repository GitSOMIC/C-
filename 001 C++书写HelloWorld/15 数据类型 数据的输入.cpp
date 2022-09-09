#include<iostream>
using namespace std;
#include<string>
int main()
{
	//1，整型
	//int a = 0;
	//cout << "请给整型变量a赋值：" << endl;
	//cin >> a;
	//cout << "整型变量a = " << a << endl;
	////2,浮点型
	//float f;
	//cout << "请给浮点型变量f赋值" << endl;
	//cin >> f;
	//cout << "浮点型变量f = " << f << endl;
	//3,字符型
	//char ch = 'a';
	//cout << "请给字符型变量ch赋值" << endl;
	//cin >> ch;
	//cout << "字符型变量ch = " << ch << endl;
	//4,字符串型
	//string str = "hello"; 
	//cout << "请给字符串str赋值" << endl;
	//cin >> str; //需要头文件#include<string>
	//cout << "字符串str = " << str << endl;
	//5,布尔型
	bool flag;
	cout << "请输入一个布尔类型" << endl;
	cin >> flag; //布尔类型非0为真，但输入字符型字符串，输出为0
	cout << "布尔类型flag的值为" << flag << endl;



	system("pause");

	return 0;
}