#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 150

int main() {
	int a = 5;
	int week = 1;

	do {
		a -= week;
		a *= 2;
		printf("friend:%d\n", a);
		week++;
	} while (a < MAX);

	printf("week:%d\n", week);
	printf("friend:%d\n", a);

	return 0;
}