#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int main()
{
	int i =0 , count=0 , sum=0;
	for(i=1;i<=100;i++)
	{
		if(i%10==9)
			//9 19 29 39 49 59 69 79 89 99
			count++;
	    if(i/10==9)
			//90 91 92 93 94 95 96 97 98 99
			count++;
	}
	printf("所有9的个数为count=%d\n",count);
	return 0;
}