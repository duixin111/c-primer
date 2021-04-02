#include<stdio.h>

void order(int a, int b, int c);

int main() {
	int a, b, c;
	printf("please input three number:");
	scanf_s("%d %d %d", &a, &b, &c);
	order(a, b, c);

	return 0;
}

void order(int a, int b, int c) {
	int t;

	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("order:%d > %d > %d", a, b, c);
}