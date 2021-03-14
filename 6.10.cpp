#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b;
	int c = 0;
	printf("please input two integer:");
	scanf("%d %d", &a, &b);
	for (int i = a; a <= b; a++) {
		c = c + a * a;
		
	}
	printf("%d", c);

	return 0;

}