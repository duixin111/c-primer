#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void larger_of(double* a, double* b);

int main() {
	double a, b;

	scanf("%lf %lf", &a, &b);

	larger_of(&a, &b);

	printf("%lf %lf", a, b);
	return 0;
}

void larger_of(double* a, double* b) {
	*a = *b = *a > *b ? *a : *b;
}