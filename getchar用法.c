#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char password[20]={0};
	int ret =0;
	int ch =0;
	printf("请输入密码:>");
	scanf("%s",password);//输入密码，并放在password数组中
	//缓冲区还剩余一个'\n'
	//读取一下'\n'
	while((ch=getchar())!='\n')//getchar一次只能读取一个字符，因此需要在这里设置while()循环
	{
		;
	}
	printf("请确认(Y/N):>");
	ret=getchar();//Y/N
	if(ret=='Y')
	{
		printf("确认成功");
	}
	else
		printf("放弃确认");
	return 0;
} 