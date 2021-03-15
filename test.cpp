#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

int main() {
	char a;

	printf("input :");
	scanf("%c", &a);

	int b = a - 'A';

	int c = 'A' - 1;
	for (int i = 0; i < b + 1; i++) {
		for (int j = 0; j < b-i; j++)
			printf(" ");
		for (int j = 0; j <= i  ; j++) {
			
			printf("%c", ++c);

		}
		for (int j = 0; j < i; j++)
			printf("%c", --c);
		printf("\n");
	}
	return 0;

}