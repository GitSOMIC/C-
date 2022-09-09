#include<iostream>
using namespace std;

int main()
{
	//1,创建bool数据类型
	bool flag = true;  //本质是1
	cout << flag << endl; //打印出来是1 
	
	flag = false;
	cout << flag << endl; 
	//2,查看bool类型所占内存空间
	cout << "//2,查看bool类型所占内存空间" << sizeof(bool) << endl; 

	system("pause");

	return 0;
}