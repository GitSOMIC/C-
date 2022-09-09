#include<iostream>
using namespace std;

int main()
{
	int a = 5;
	// 两个整型数值相除，得到的还是整型，这是整型精确计算所要求的。
	// 如果要得到小数，必须先转换为浮点型再进行运算。
	cout << a / 2 << endl;
	cout << a / 2.0 << endl;
	cout << float(a) / 2 << endl;

	system("pause");

	return 0;
}