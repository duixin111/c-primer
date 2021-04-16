#include<stdio.h>

int Max(int a, int b)
{
	return a > b ? a : b;
}
int Min(int a, int b)
{
	return a < b ? a : b;
}
int Find(int a, int b, int(*pfun)(int a, int b))
{
	return pfun(a, b);
}
int main()
{
	int a = 10, b = 20;
	int result = Find(a, b, Min);
	int(*pfun)(int, int);
	pfun = Min;
	int result1 = pfun(a, b);
	printf("%d\n", result1);

	return 0;

}