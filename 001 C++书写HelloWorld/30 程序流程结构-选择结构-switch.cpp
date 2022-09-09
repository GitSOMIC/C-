#include<iostream>
using namespace std;

int main()
{
	
	//1,提示用户进行打分
	cout << "请给电影打分" << endl;

	//2，用户打分
	int score = 0;
	cin >> score;

	// 3，返回用户打的分数
	cout << "您输入的分数为：" << score << endl;

	// 4，根据用户打的分数，输出对应评级

	/*
	switch (score)
	{
	case 10:
		cout << "您认为是经典电影" << endl;
		break;
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为电影非常好" << endl;
		break;
	case 7:
		cout << "您认为电影非常好" << endl;
		break;
	case 6:
		cout << "您认为电影一般" << endl;
		break;
	case 5:
		cout << "您认为电影一般" << endl;
		break;
	case 4:
		cout << "烂片" << endl;
		break;
	case 3:
		cout << "烂片" << endl;
		break;
	case 2:
		cout << "烂片" << endl;
		break;
	case 1:
		cout << "烂片" << endl;
		break;
	case 0:
		cout << "烂片" << endl;
		break;
	}
	*/


	// case 是程序入口 利用case，和default 
	switch (score)
	{
	case 10:
	case 9:
		cout << "经典" << endl;
		break;
	case 8:
		cout << "非常好" << endl;
		break;
	case 7:
	case 6:
		cout << "一般" << endl;
		
	default:
		cout << "烂片" << endl;
		break;
	}

	// if  和 switch 区别
	// switch 缺点， 判断的时候只能是整型或字符型，不可以是一个区间。
	// switch 优点， 结构清晰，执行效率高。
	// case里如果没有break，那么程序会一直向下执行,default也会执行。

	

	system("pause");

	return 0;

}