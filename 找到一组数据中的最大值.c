#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int max =arr[0];
	//���涨 int max=0;��max�ĳ�ʼֵΪ0������ʱǡ��һ�������е���ȫ����0Сʱ����������
	//��˹涨 int max = (���е�һ�����֣�arr[0];
	int i =0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(i=1;i<sz;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("���ֵΪ��%d\n",max);
	return 0;
}