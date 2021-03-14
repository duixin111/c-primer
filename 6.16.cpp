#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	double a, b, c, d;
	a = 0.1;
	b = 0.05;
	c = d = 100;
	int m = 0;
	do {
		c = c + 100 * a;
		d = d + b * d;
		m++;

	} while (d < c);

	printf("%lf\n%lf", c, d, m);

	return 0;
}