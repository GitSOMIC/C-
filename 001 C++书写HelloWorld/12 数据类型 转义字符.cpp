#include<iostream>
using namespace std;

int main()
{

	//转义字符

	// 换行符 \n
	cout << "hello world\n";
	
	//反斜杆 \\

	cout << "\\\n";
	
	//水平制表符  \t

	cout << "aaaa\thelloworld" << endl; // \t 占8个英文字符宽度  有3个a 就剩5空格 4个a 剩4空格
	cout << "aaa\thelloworld" << endl;
	cout << "aa\thelloworld" << endl;
	system("pause");

	return 0;
}