#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
//������ʱ����
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
//�Ӽ���-���ܻ����
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
//���ķ���
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

//��������

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