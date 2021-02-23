#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int s = 1;
//	int n = 0;
//	int j = 0;
//	printf("请输入:>");
//	scanf("%d", &n);
//		for (int i = 1; i <= n; i++)
//		{
//			s = s*i;
//			j = j + s;
//		}
//		printf("%d\n",j);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}//6分void my_strcpy(char* dest, char* src){	while (*src!='\0')	{		*dest = *src;		dest++;		src++;	}	*dest = *src;}int main(){	char arr1 = "###########";	char arr2 = "bit";	my_strcpy(arr1, arr2);	printf("%s\n", arr1);}