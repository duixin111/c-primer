#include<stdio.h>

void exchange(int* a, int* b);

int main()
{
	int a, b;
	printf("please input two number:");
	scanf_s("%d %d", &a, &b);
	exchange(&a, &b);
	printf("after exchange:%d %d", a, b);
	return 0;
}

void exchange(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}