#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
double HarmonicMean(double a, double b);
int main() {
	double a, b;
	printf("请输入两个数：");
	scanf_s("%lf %lf", &a, &b);
	double c = HarmonicMean(a, b);

	printf("HarmonicMean is:%lf", c);

	return 0;
}
double HarmonicMean(double a, double b) {
	double c;
	c = ((1 / a) + 1 / b) / 2;

	return 1/c;
}