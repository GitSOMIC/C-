#include<iostream>
using namespace std;


// time系统头文件包含
#include <ctime>



// 系统随机生成一个1到100之间的数字，玩家进行猜测
// 如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏。


int main()
{
	//1，系统生成随机数
	// 2，玩家进行猜测
	// 3，判断玩家的猜测
	// 4，输出是否猜对 
	//	对 退出游戏
	//	错 提示过大过小返回 第2 步骤



	//添加随机数种子，利用当前系统时间生成随机数，防止每次随机数都一样
	srand ((unsigned int)time(NULL));

	int num = rand() % 100 + 1;
	//rand() % 100 生成 0 ~ 99 的随机数
	
	int val = 0;
	
	
	while (val != num)
	{
		cout << "我猜是" << endl;
		cin >> val;

		if (val > num)
			cout << "过大" << endl;
		else if(val < num)
			cout << "过小" << endl;

	}
	cout << "猜对了num = " << num << endl;
	system("pause");

	return 0;
}