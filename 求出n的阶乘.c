#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.��ͨ������n!
//int main()
//{
//	//int i=0;��������ı���iֻ������for()ѭ����ʱ������Ϳ���ֱ�Ӻϲ���for()ѭ����
//	int s = 1;
//	int n = 0;
//	//n��������Ϊ�˹涨i�����ޣ���������i�������������ý׳˳���������
//	printf("������\n");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)//����1-n�����֣�
//	{
//		s = s*i;
//	}
//	printf("����%d�Ľ׳�Ϊ>:%d\n",n,s);
//	return 0;
//}

//2.������n��
//int Fac1(int n)
//{
//	int s = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		s = s*i;
//	}
//	return s;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("������>: ");
//	scanf("%d", &n);
//	ret = Fac1(n);
//	printf("����%d�Ľ׳�Ϊ>:%d\n",n,ret);
//	return 0;
//}


//3.�ݹ���n!

int Fac2(int n)
{
	if (n > 1)
		return  n*Fac2(n - 1);
	return 1;
}

int main()
{
	int n = 0;
	int ret = 0;
	printf("������: ");
	scanf("%d", &n);
	ret = Fac2(n);
	printf("%d�Ľ׳�Ϊ>:%d \n",n,ret);
	return 0;
}