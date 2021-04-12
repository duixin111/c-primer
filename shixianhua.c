#include<stdio.h>
#include<stdbool.h>
#include<math.h>

#define MAX 100000

bool shuixianhua(int value);
int count(int value);

int main()
{
	for (int i = 1; i <= MAX; i++)
		if (shuixianhua(i))
			printf("%-8d", i);
	return 0;
}
bool shuixianhua(int value)
{
	int count1 = count(value);
	int sum = 0;
	int n = value;
	
	while (value != 0)
	{
		int tmp;
		tmp = value % 10;
		value /= 10;
		sum += pow(tmp, count1);
	}
	if (sum == n)
		return true;
	else
		return false;
}
int count(int value)
{
	int count1 = 1;
	while (value / 10)
	{
		count1++;
		value /= 10;
	}
	return count1;
}
