#include<iostream>
using namespace std;

int main()
{

	// ѡ��ṹ ����if���
	// �û���������������������600����Ϊ����һ����ѧ������Ļ�����

	//1���û�����ķ���

	int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;

	//2����ӡ�û�����ķ���

	cout << "������ķ�����= " << score << endl;


	//3���жϷ����Ƿ����600��������ڣ���ô���

	if (score > 600)
	{
		cout << "��ϲ����һ��" << endl;
		if (score > 700)
		{
			cout << "�������廪" << endl;
		}
		else if (score > 650)
		{
			cout << "�����˱���" << endl;
		}
		else
		{
			cout << "�������˴�" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "��ϲ���϶���" << endl;
	}
	else if (score > 400)
	{
		cout << "��ϲ��������" << endl;
	}
	else
	{
		cout << "��ϲ���ϴ�ר" << endl;
	}
	system("pause");

	return 0;
}