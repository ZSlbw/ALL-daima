#define _CRT_SECURE_NO_WARNINGS 1

//쳲�������:1 1 2 3 5 8 13 21 34 55...
#include<stdio.h>
/*
//1.�ݹ�
//�˷����޷���Ƚϴ��쳲�������

int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 2) + Fib(n - 1);
}

//���50��쳲�������
//50
//49 48
//47 48 47 46
//46 45 47 46 45 44
//...
*/


//2.ѭ��
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
	printf("����������쳲�������>: \n");
	scanf("%d", &n);
	ret = Fib(n);
	printf("��%d��쳲�������Ϊ%d \n", n, ret);
	return 0;
}