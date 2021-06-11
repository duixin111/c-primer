#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void my_sort(char arr[], int size)
{
	int len = size;
	int a = arr[0];
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
		}
	}
	for (int i = 0; i < size; i++)
		printf("%c", arr[i]);
	printf("\n");
}

int main()
{
	char arr[30];
	while (scanf("%s", arr) != EOF)
		my_sort(arr, strlen(arr));
	
	return 0;
}
