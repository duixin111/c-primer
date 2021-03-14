#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a[8];
	int an = 2;
	for (int i = 0; i < 8; i++) {
		a[i] = an;
		an = an * 2;
	
	}
	int i = 0;
	do {
		
		printf("%d\n", a[i]);
		i++;
	} while (i < 8);
		return 0;

}