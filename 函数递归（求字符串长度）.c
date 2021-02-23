#include<stdio.h>

//普通方法（计数器）
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
//函数递归方法（不创建临时变量）
//把大事化小
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
//指针运算
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
	//模拟实现strlen()
	int len = my_strlen(arr);//arr是数组，无论是整型数组还是字符串数组，都属于数组
	//因此在传参时，传过去的仅仅是首元素的地址
	printf("%d\n", len);
}