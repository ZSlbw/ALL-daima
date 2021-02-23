#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int year =0;
	int count =0;
	for(year=1000;year<=2000;year++)
	{
		//能被4整除，不能被100整除
		//能被400整除
		if(year%4==0 && year%100!=0)
		{
			printf("%d ",year);
			count++;
		}
		else if (year%400==0)
		{
			printf("%d ",year);
			count++;
		}

	}
	printf("\ncount=%d\n",count);
	return 0;
}



//int main()
//{
//	int i =1000;
//	while (i>=1000 && i <=2050)
//	{
//		if (i%4==0 && i%100!=0 )
//			printf("%d\n",i);
//		if(i%400==0 && i%100!=0)
//			printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}
