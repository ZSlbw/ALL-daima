#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Pow(int n, int k)
{
	//n^k = n*n^(k-1)
	if (k == 0)
		return 1;
	else if (k < 0)
		return (1 / Pow(n, -k));
	else
		return n*Pow(n, k - 1);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	int ret = Pow(n, k);
	printf("%d\n", ret);
	return 0;
}
