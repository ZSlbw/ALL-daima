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
	if(j>sqrt((double)(n)))
		return 1;
}

int main()
{
	int i=0,a=0,b=0,count=0;
	printf("请输入你要查找的素数范围>: ");
	scanf("%d-%d",&a,&b);
	printf("%d到%d之间的素数为>: ",a,b);
	if(a%2==0)
		a++;
	for(i=a;i<=b;i+=2)
	{
		if(is_prime(i)==1)
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("\n%d到%d之间共有素数%d个\n",a,b,count);
	return 0;
}