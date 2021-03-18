#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char a;
	int m, n;
	m = n = 0;

	while (scanf("%c", &a) != EOF)
	{
		if (a >= 41 && a <= 90) {
			m++;
		}
		else if (a >= 97 && a <= 122) {
			n++;
		}
		else
		{
			;
		}
		
	}
	printf("%d,%d", m, n);
	return 0;
}
