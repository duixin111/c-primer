#include<stdio.h>

void rhombus(int n);
int main()
{
	rhombus(7);

	return 0;
}
void rhombus(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n-1; j - i > 0; j--)
			putchar(' ');
		for (int j = 0; j <= 2*i; j++)
		{
			putchar('*');
		}
		putchar('\n');
	
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			putchar(' ');
		for (int j = 0; j <= 2*(n-i-1); j++)
			putchar('*');
		putchar('\n');
	}
}