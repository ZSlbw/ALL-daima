#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i =0;
	double sum =0;
	//������
	int flag=1;
	for(i=1;i<=100;i++)
	{
		sum=sum+flag*(1.0/i);
		//1/i �������ͣ�1��i���κ�һ��ΪС������ΪС��
		flag=-flag;
	}
	printf("%lf\n",sum);
	return 0;
}



//int main()
//{
//	int i =0;
//	double a =0;
//	for(i=1;i<100;i++)
//	{
//		if(i%2==0)
//		{
//			a+=(1.0/i)*(-1);
//		}
//		else
//		{
//			a+=(1.0/i);
//		}
//
//	}
//	printf("%lf\n",a);
//	return 0;
//}

