#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int max =arr[0];
	//若规定 int max=0;则max的初始值为0，若此时恰好一组数据中的数全部比0小时，则检测有误
	//因此规定 int max = (组中的一个数字）arr[0];
	int i =0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(i=1;i<sz;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("最大值为：%d\n",max);
	return 0;
}