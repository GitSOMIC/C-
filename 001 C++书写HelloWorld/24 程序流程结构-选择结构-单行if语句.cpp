#include<iostream>
using namespace std;

int main()
{

	// 选择结构 单行if语句
	// 用户输入分数，如果分数大于600，视为考上一本大学，在屏幕上输出

	//1、用户输入的分数

	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;

	//2、打印用户输入的分数

	cout << "您输入的分数是= " << score << endl;


	//3、判断分数是否大于600，如果大于，那么输出

	if (score > 600)
	{
		cout << "恭喜考上一本" << endl;
		if (score > 700)
		{
			cout << "考上了清华" << endl;
		}
		else if (score > 650)
		{
			cout << "考上了北大" << endl;
		}
		else
		{
			cout << "考上了人大" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "恭喜考上二本" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜考上三本" << endl;
	}
	else
	{
		cout << "恭喜考上大专" << endl;
	}
	system("pause");

	return 0;
}