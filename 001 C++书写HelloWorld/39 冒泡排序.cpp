
#include<iostream>
using namespace std;

int main()
{
	int arr[] = { 2,4,0,5,7,1,3,8,9 };

	int temp;

	int lenth = sizeof(arr) / sizeof(arr[0]); //Ԫ�ظ���

	// ���������� = Ԫ�ظ��� - 1
	for (int i = 0; i < lenth - 1; i++)   // ��0��ʼ��  lenth - 1  ��<С�� ��1��ʼ��<=С�ڵ��ڡ�
											// �����±��0��ʼ��ֻ����<С���ˡ�
	{
		// �ڲ�Ա�ѭ������ = Ԫ�ظ��� - ��ǰ���� - 1
		for (int j = 0; j < lenth - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;



			}


		}


	}

	for (int k = 0; k < lenth; k++)
	{
		cout << arr[k] << endl;

	}










	system("pause");
	return 0;


}