#include<stdio.h>

int main() {
	int a, b;
	printf("please input two number:");
	scanf_s("%d %d", &a, &b);
	int t;
	t = a > b ? a : b;
	for (int i = t; i > 0; i--) {
		if (a % i == 0 && b % i == 0) {
			printf("%d\n", i);
			return 0;
		}
	}

	return 0;

}