#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char password[20]={0};
	int ret =0;
	int ch =0;
	printf("����������:>");
	scanf("%s",password);//�������룬������password������
	//��������ʣ��һ��'\n'
	//��ȡһ��'\n'
	while((ch=getchar())!='\n')//getcharһ��ֻ�ܶ�ȡһ���ַ��������Ҫ����������while()ѭ��
	{
		;
	}
	printf("��ȷ��(Y/N):>");
	ret=getchar();//Y/N
	if(ret=='Y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
		printf("����ȷ��");
	return 0;
} 