#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
                 //�����arr��������ָ�룬��������׸�Ԫ�صĵ�ַ
int binary_search(int arr[],int k,int sz)//(int* arr,int k,int sz)
//���ַ��������ԣ����ɸ����������ѡ��ʽ
{
	//int sz=sizeof(arr)/sizeof(arr[0]);����sizeof�����ʵ�ǵ�ַ��{0}���Ĵ�С
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
	//���ִ˽����left>right����ԭ���ǣ����������һ��ʱ����û���ҵ��������齫���´��������±�
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int k=7;             //Ϊ����ռ���˷ѣ������ڴ���ʱ�����Ľ����ǵ�һ��Ԫ�صĵ�ַ
	int ret=binary_search(arr,k,sz);
	//�˺����������������±�ģ����Է���ֵ(ret)�����±�
	if(ret==-1)
		printf("�Ҳ���\n");
	else
		printf("�ҵ��ˣ��±���%d\n",ret);
	return 0;
}