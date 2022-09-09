
 #include"swap.h" //自己定义的用 " ",系统自带的用 < >


// 函数的定义
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


}