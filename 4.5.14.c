#include<stdio.h>
#include<stdbool.h>

bool IsLeapYear(int year);

int main()
{
	int year;
	while (1)
	{
		printf("please input a year:(end is -1):");
		scanf_s("%d", &year);
		if (year == -1)
			break;
		bool flag = IsLeapYear(year);
		if (flag)
			printf("%d is leap year.\n",year);
		else
			printf("%d isn't leap year.\n", year);
	}
	return 0;
}

bool IsLeapYear(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		return true;
	return false;
}
