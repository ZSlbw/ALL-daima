#define _CRT_SECURE_NO_WARNINGS 1


int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')//ע����(*str)���ǣ�(str)���׳���
	{
		count++;
		str++;
	}
	return count;
}


//��ͨ����
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

//�ݹ�
//1.�Ƚ��� a �� f
//2.��a �� f �м���ַ�����������
void reverse_string(char* arr)
{
	int len = my_strlen(arr);//����������У�arr������������βΣ����my_strlen����Ҳ���������β��ṩ��arr.
	char tmp = arr[0];
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';//����һ�κ������ҵ�e
	if (my_strlen(arr + 1) >= 2)
		reverse_string(arr + 1);//���м��ַ�����������
	arr[len - 1] = tmp;
}

int main()
{
	char arr[] = "abcdefg";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}