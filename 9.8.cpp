#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

double power(double a, int b);

int main() {

	double a, b;
	int c;
	printf("please input a double figure:");

	while (scanf("%lf %d", &a, &c) == 2 && a != '\n') {
		b = power(a, c);
		printf("power is:%lf\n", b);
	}

	return 0;
}
double power(double a, int b) { 
	double n = 1;
	if (a == 0) {
		if (b == 0) {
			printf("error!");
			n = 1;
		}
		else
		{
			n = 0;
		}
	}
	else
	{
		if (b == 0)
			n = 1;
		else if (b > 0)
		{
			for (int i = 0; i < b; i++)
				n *= a;
		}
		else {
			for (int i = 0; i < -b; i++) {
				n *= a;
			}
			n = 1 / n;
		}
		
	}

	return n;
}