#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
//6��
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
//7��
//���׳�����arr2ΪNULLʱ�����������������Ҫ��if
//�����ܵ�ԭ��
void my_strcpy(char* dest, char* src)
{
	if (dest != NULL && src != NULL)
	{
		while (*dest++ = *src++)//ѭ��������ԭ��:���ʽ���Ϊ '\0';
		{
			;
		}
	}
}
*/

/*
//8��
#include <assert.h>
void my_strcpy(char* dest, char* src)
{
	//assert -- ����
	//��()�еı��ʽΪ��ʱ�������в�����
	//��()�еı��ʽΪ��ʱ�������ڳ���λ�ñ���
	assert(dest!=NULL);
	assert(src != NULL);
	while (*dest++ = *src++)//ѭ��������ԭ��:���ʽ���Ϊ '\0';
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


//10��
//const + 1
//char* my_strcpy + 1
#include <assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//����
	assert(src != NULL);//����
	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	//strcpy
	//�ַ�������
	char arr1[] = "###########";
	char arr2[] = "bit";	
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}
