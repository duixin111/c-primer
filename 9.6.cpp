#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

void sort(double* x, double* y, double* z);

int main() {
	double a, b, c;

	printf("please input three");

	scanf("%lf %lf %lf", &a, &b, &c);

	sort(&a, &b, &c);

	printf("%lf %lf %lf", a, b, c);

	return 0;
}

void sort(double* x, double* y, double* z) {
    double t;
    if (*x < *y)
    {
        t = *x; *x = *y; *y = t;
    }
    if (*y < *z)
    {
        t = *y; *y = *z; *z = t;
    }
    if (*x < *y)
    {
        t = *x; *x = *y; *y = t;
    }

}