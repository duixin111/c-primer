#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define MAX 200
bool IsPrime(int num);

int main() {
	
	int num = 100;
	while (num != MAX + 1)
	{
		bool flag = IsPrime(num);
		if (flag)
			printf("%d is prime.\n", num);
	//	else
	//		printf("%d isn't prime.\n", num);
		num++;
	}

	return 0;
}
bool IsPrime(int num)
{
	int n = sqrt(num);
	for (int i = 2; i <= n; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}