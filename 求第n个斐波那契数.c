#define _CRT_SECURE_NO_WARNINGS 1

//斐波那契数:1 1 2 3 5 8 13 21 34 55...
#include<stdio.h>
/*
//1.递归
//此方法无法求比较大的斐波那契数

int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 2) + Fib(n - 1);
}

//求第50个斐波那契数
//50
//49 48
//47 48 47 46
//46 45 47 46 45 44
//...
*/


//2.循环
int Fib(int n)
{
	int c = 1;
	int a = 1;
	int b = 1;
	while(n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}


int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入所求斐波那契数>: \n");
	scanf("%d", &n);
	ret = Fib(n);
	printf("第%d个斐波那契数为%d \n", n, ret);
	return 0;
}