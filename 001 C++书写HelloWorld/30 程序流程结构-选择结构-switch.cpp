#include<iostream>
using namespace std;

int main()
{
	
	//1,��ʾ�û����д��
	cout << "�����Ӱ���" << endl;

	//2���û����
	int score = 0;
	cin >> score;

	// 3�������û���ķ���
	cout << "������ķ���Ϊ��" << score << endl;

	// 4�������û���ķ����������Ӧ����

	/*
	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 7:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 6:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	case 5:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	case 4:
		cout << "��Ƭ" << endl;
		break;
	case 3:
		cout << "��Ƭ" << endl;
		break;
	case 2:
		cout << "��Ƭ" << endl;
		break;
	case 1:
		cout << "��Ƭ" << endl;
		break;
	case 0:
		cout << "��Ƭ" << endl;
		break;
	}
	*/


	// case �ǳ������ ����case����default 
	switch (score)
	{
	case 10:
	case 9:
		cout << "����" << endl;
		break;
	case 8:
		cout << "�ǳ���" << endl;
		break;
	case 7:
	case 6:
		cout << "һ��" << endl;
		
	default:
		cout << "��Ƭ" << endl;
		break;
	}

	// if  �� switch ����
	// switch ȱ�㣬 �жϵ�ʱ��ֻ�������ͻ��ַ��ͣ���������һ�����䡣
	// switch �ŵ㣬 �ṹ������ִ��Ч�ʸߡ�
	// case�����û��break����ô�����һֱ����ִ��,defaultҲ��ִ�С�

	

	system("pause");

	return 0;

}