#include<stdio.h>

void print(int n);

int main()
{
	int vlane = 12345;
	print(vlane);

	return 0;
}
void print(int n)
{
	if (n > 9)
		print(n / 10);
	printf("%d ", n % 10);
}