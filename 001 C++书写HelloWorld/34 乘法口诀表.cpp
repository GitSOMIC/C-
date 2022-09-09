#include<iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 9; i++)
	{
		//cout << i << endl;
		for (int j = 1; j <= i; j++)
		{
			if (i == 3 && j == 3 || i==4 && j==3)//ÃÖ²¹3*3ºÍ4*3ÅÅ°æÓÐµãÍá
			{
				cout << " ";
			}

			cout << i << " X " << j << " = " << i * j << "   ";
		}
		cout << endl;
	}
}