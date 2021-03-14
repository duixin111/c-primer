#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string>

int main() {
	char a[50];
	int i = -1;

	do {
		i++;
		scanf("%c", &a[i]);

	} while (a[i] != '\n');

	for (i--; i >= 0; i--){
		printf("%c",a[i]);
		}

	return 0;
}