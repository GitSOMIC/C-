#include<iostream>
using namespace std;


// timeϵͳͷ�ļ�����
#include <ctime>



// ϵͳ�������һ��1��100֮������֣���ҽ��в²�
// ����´���ʾ������ֹ�����С������¶Թ�ϲ���ʤ���������˳���Ϸ��


int main()
{
	//1��ϵͳ���������
	// 2����ҽ��в²�
	// 3���ж���ҵĲ²�
	// 4������Ƿ�¶� 
	//	�� �˳���Ϸ
	//	�� ��ʾ�����С���� ��2 ����



	//�����������ӣ����õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand ((unsigned int)time(NULL));

	int num = rand() % 100 + 1;
	//rand() % 100 ���� 0 ~ 99 �������
	
	int val = 0;
	
	
	while (val != num)
	{
		cout << "�Ҳ���" << endl;
		cin >> val;

		if (val > num)
			cout << "����" << endl;
		else if(val < num)
			cout << "��С" << endl;

	}
	cout << "�¶���num = " << num << endl;
	system("pause");

	return 0;
}