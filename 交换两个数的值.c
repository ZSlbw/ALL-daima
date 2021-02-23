#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
//创建临时变量
int main()
{
	int a = 5;
	int b = 3;
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
	printf("a=%d,b=%d\n", a, b);
	return 0;
}
*/

/*
//加减法-可能会溢出
int main()
{
	int a = 5;
	int b = 3;
	a = a + b;
	b = a - b;
	a = a - b;
	return 0;
}
*/

/*
//异或的方法
int main()
{
	int a = 5;
	int b = 3;
	a = a^b;
	b = a^b;
	a = a^b;
	return 0;
}
*/

//函数方法

void Swap(int* px, int* py);
{
	int tmp = 0;
	tmp = * px;
	* px = * py;
	* py = tmp;
}

int main()
{
	int a = 5;
	int b = 3;
	Swap(&a,&b);
	printf("a=%d,b=%d", a, b);
	return 0;
}