

#include<iostream>
#include<string>
using namespace std;

int main()
{

	int scores[3][3] =
	{
		{100, 100, 100},
		{90, 50, 100},
		{60, 70, 80}
	};
	string courses[4] = {"  " ,"����", "��ѧ", "Ӣ��"};
	string name[3] = { "����", "����", "����" };

	for (int k = 0; k < 4; k++)
	{
		cout << courses[k] << "   ";
	}
	cout << endl;


	for(int i = 0; i < 3; i++)
	{ 
		cout << name[i] << "   ";
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
			cout << scores[i][j] << "   ";
		}
		cout << "�ܷ�" << sum << endl;

	}
	


	system("pause");
	return 0;
}