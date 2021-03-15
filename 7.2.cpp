#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 8

int main() {
	char a;
	int b = 0;
	while ((a = getchar()) != '#') {
		b++;
			if (b % MAX == 0) {
				printf("\n");
			}
			else
			{
				printf("%c", a);
				printf("%3d\t", a);
			}
		}
	
	return 0;
}