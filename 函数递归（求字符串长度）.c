#include<stdio.h>

//��ͨ��������������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

/*
//�����ݹ鷽������������ʱ������
//�Ѵ��»�С
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("\0");
//1+1+1+0
//3
*/

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//		return 0;
//}

/*
//ָ������
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
*/

/*
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
*/

int main()
{
	char arr[] = "bit";
	//ģ��ʵ��strlen()
	int len = my_strlen(arr);//arr�����飬�������������黹���ַ������飬����������
	//����ڴ���ʱ������ȥ�Ľ�������Ԫ�صĵ�ַ
	printf("%d\n", len);
}