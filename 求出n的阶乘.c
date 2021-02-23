#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.普通方法求n!
//int main()
//{
//	//int i=0;如果创建的变量i只存在在for()循环里时，这里就可以直接合并到for()循环里
//	int s = 1;
//	int n = 0;
//	//n的作用是为了规定i的上限，因此这里的i才是真正的能让阶乘出来的因子
//	printf("请输入\n");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)//产生1-n的数字；
//	{
//		s = s*i;
//	}
//	printf("数字%d的阶乘为>:%d\n",n,s);
//	return 0;
//}

//2.函数求n！
//int Fac1(int n)
//{
//	int s = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		s = s*i;
//	}
//	return s;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入>: ");
//	scanf("%d", &n);
//	ret = Fac1(n);
//	printf("数字%d的阶乘为>:%d\n",n,ret);
//	return 0;
//}


//3.递归求n!

int Fac2(int n)
{
	if (n > 1)
		return  n*Fac2(n - 1);
	return 1;
}

int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入: ");
	scanf("%d", &n);
	ret = Fac2(n);
	printf("%d的阶乘为>:%d \n",n,ret);
	return 0;
}