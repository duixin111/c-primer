#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {

	char a;
	int i = 0;
	while ((a = getchar()) != EOF) {
		i++;
	}
	printf("%d", i);

	return 0;
}