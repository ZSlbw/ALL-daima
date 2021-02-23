#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int left = 0;
	int right = sz-1;
	int k =0;
	printf("请输入1-10的数字\n");
	scanf("%d",&k);
	printf("查找数字%d的下标\n",k);
	while(left<=right)
	{
		int mid = (left + right)/2;
	    if(arr[mid]<k)
		{
			left=mid+1;
		}
		else if(arr[mid]>k)
		{
			right=mid-1;
		}
		else
			{
				printf("下标为：%d\n",mid);
				break;
		    }
	}
	if(left>right)
	{
		printf("找不到\n");
	}
	return 0;
}