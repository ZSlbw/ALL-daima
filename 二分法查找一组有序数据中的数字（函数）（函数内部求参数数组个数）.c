#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
                 //这里的arr本质上是指针，存放数组首个元素的地址
int binary_search(int arr[],int k,int sz)//(int* arr,int k,int sz)
//两种方法均可以，但可根据题意理解选择方式
{
	//int sz=sizeof(arr)/sizeof(arr[0]);这里sizeof求的其实是地址（{0}）的大小
	int left=0;
	int right=sz-1;
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(arr[mid]>k)
			right=mid-1;
		else if(arr[mid]<k)
			left=mid+1;
		else
			return mid;
	}
	return -1;//if(left>right);
	//出现此结果（left>right）的原因是：当查至最后一次时，若没有找到，则数组将重新打乱左右下标
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int k=7;             //为避免空间的浪费，数组在传参时，传的仅仅是第一个元素的地址
	int ret=binary_search(arr,k,sz);
	//此函数就是来定义找下标的，所以返回值(ret)就是下标
	if(ret==-1)
		printf("找不到\n");
	else
		printf("找到了，下标是%d\n",ret);
	return 0;
}