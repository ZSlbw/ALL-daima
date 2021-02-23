#define _CRT_SECURE_NO_WARNINGS 1


int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')//注意是(*str)不是，(str)，易出错
	{
		count++;
		str++;
	}
	return count;
}


//普通方法
/*
void reverse_string(char* arr)
{
int len = my_strlen(arr);
int left = 0;
int right = len - 1;
while (left<right)
{
char tmp = 0;
tmp = arr[left];
arr[left] = arr[right];
arr[right] = tmp;
left++;
right--;
}
}
*/

//递归
//1.先交换 a 和 f
//2.对a 和 f 中间的字符串进行逆序
void reverse_string(char* arr)
{
	int len = my_strlen(arr);//在这个函数中，arr均来自上面的形参，因此my_strlen调用也仅仅调用形参提供的arr.
	char tmp = arr[0];
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';//在下一次函数中找到e
	if (my_strlen(arr + 1) >= 2)
		reverse_string(arr + 1);//对中间字符串进行逆序
	arr[len - 1] = tmp;
}

int main()
{
	char arr[] = "abcdefg";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}