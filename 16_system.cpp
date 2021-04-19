#include<stdio.h>

char* arr_16(int);
int main()
{
	int a = 16;
	char* m = arr_16(a);
	for (int i = 0; i < 8; i++)
		printf("%c", m[i]);
	return 0;
}

char* arr_16(int value)
{
	char arr[8] = { 0 };
	int i = 7;
	while (value)
	{
		arr[i--] = "0123456789ABCDEF"[value % 16];
		value /= 16;
		/*
		int mod = value % 16;
		if (mod >= 10)
			arr[i] = mod - 10 + 'A';
		else
			arr[i] = mod + '0';
		value /= 16;
		i--;*/
	}
	return arr;

}