#include<iostream>
using namespace std;




// ���������mian������������Ҫʹ�ú���������
// ��������������ǰ���߱����������Ĵ��ڣ��������ú���������
// �������Զ�Σ�����ֻ��һ��

//����
int max(int a, int b);
int max(int a, int b);

int main()
{
	int a = 100;
	int b = 200;

	cout << max(a, b) << endl;

	system("pause");
	return 0;
}


//����
int max(int a, int b)
{
	return a > b ? a : b;
}



