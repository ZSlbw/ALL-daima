#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���
int main()
{
	int count = 0;
	int n = 0;
	scanf("%d", &n);
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	printf("%d\n", count);
	return 0;
}
//n = n&(n-1)
//n
//13
//1101 n
//1100 n-1
//1100 n
//1011 n-1
//1000 n
//0111 n-1
//0 n


//��λ�����������λ������
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	for (int i = 0; i < 32;i++)
	{
		num >>= i;
		if ((num & 1) == 1)
			count++;
	}
	printf("%d\n", count);
	return 0;
}


/*
//ֻ���������
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	//ͳ��num�Ĳ������м���1
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}
	printf("%d\n", count);
	return 0;
}
*/