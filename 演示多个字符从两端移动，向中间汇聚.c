#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	char arr1[]="welcome to bit";
	char arr2[]="##############";
	int left=0;
	//int right=sizeof(arr2)/sizeof(arr2[0])-2;
	//sizeof中考虑字符串末尾的\n；而strlen直接表示字符串长度，不考虑\n
	int right=strlen(arr2)-1;
	while(left<=right)
	{
		arr2[left]=arr1[left];
	    arr2[right]=arr1[right];
	    printf("%s\n",arr2);
		Sleep(1000);
		system("cls");
	    left++;
	    right--;
	}
	printf("welcome to bit\n");
	return 0;
}