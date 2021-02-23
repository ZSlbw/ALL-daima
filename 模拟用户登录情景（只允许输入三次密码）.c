#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<Windows.h>

int main()
{
	char password [20]={0};
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("请输入密码:");
		scanf("%s",password);
		if(strcmp(password,"123456")==0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误,还有：%d次机会\n",2-i);
			Sleep(1000);
		}
	}
	if(i==3)
	printf("输入错误\n");

	return 0;
}

