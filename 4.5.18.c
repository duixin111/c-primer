#include<stdio.h>

int factorial_1(int value);
int factorial_2(int value);

int main() {
	int value;
	while (1)
	{
		printf("please input a number(end is minus):");
		scanf_s("%d", &value);		
		if (value < 0)
			break;

		printf("factorial_1: %d! = %d\n", value, factorial_1(value));
		printf("factorial_2: %d! = %d\n", value, factorial_2(value));

	}

	return 0;
}

int factorial_1(int value)
{
	if (value == 0)
		return 0;
	if (value == 1)
		return 1;
	if (value > 1)
		return value * factorial_1(value - 1);
}
int factorial_2(int value)
{
	int num = 1;
	if (value == 0)
		return 0;
	if (value == 1)
		return 1;
	if (value > 1)
	{
		for (int i = 1; i <= value; i++)		
			num *= i;		
		return num;
	}
}