#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	double a = 1000000;
	
	int year = 0;

	do {
		a = a + a * 0.08;
		a -= 100000;
		year++;
	} while (a > 0);

	printf("%d", year);

	return 0;
}