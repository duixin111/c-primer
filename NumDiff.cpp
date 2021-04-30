#include<stdio.h>

int main()
{
	int max = 0, min = 9999999999, value, num;
	printf("How many values do you want to enter?\n");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		printf("please input number:");
		scanf_s("%d", &value);
		max = max < value ? value : max;
		min = min > value ? value : min;
	}
	printf("The difference is %d.", max - min);
	return 0;
}