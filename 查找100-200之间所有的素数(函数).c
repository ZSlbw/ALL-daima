#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
	int j=0;
	for(j=2;j<=sqrt((double)(n));j++)
	{
		if(n%j==0)
			return 0;


	}
	return 1;
}

int main()
{
	int i=0;
	for(i=101;i<=200;i+=2)
	{
		if(is_prime(i)==1)
		{
			printf("%d ",i);
		}
	}
	return 0;
}