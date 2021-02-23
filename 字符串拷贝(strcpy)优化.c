#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
//6分
void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
}
*/

/*
//7分
//容易出错，当arr2为NULL时，程序会崩溃，因此需要加if
//但会规避掉原因
void my_strcpy(char* dest, char* src)
{
	if (dest != NULL && src != NULL)
	{
		while (*dest++ = *src++)//循环结束的原因:表达式结果为 '\0';
		{
			;
		}
	}
}
*/

/*
//8分
#include <assert.h>
void my_strcpy(char* dest, char* src)
{
	//assert -- 断言
	//当()中的表达式为真时，不进行操作。
	//当()中的表达式为假时，对所在出错位置报错
	assert(dest!=NULL);
	assert(src != NULL);
	while (*dest++ = *src++)//循环结束的原因:表达式结果为 '\0';
	{
		;
	}
	
}
*/
//int main()
//{
//	char arr1[] = "###########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//}


//10分
//const + 1
//char* my_strcpy + 1
#include <assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//断言
	assert(src != NULL);//断言
	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	//strcpy
	//字符串拷贝
	char arr1[] = "###########";
	char arr2[] = "bit";	
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}
