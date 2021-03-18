#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

int main() {
	int a;
	bool s = 0;
	float average;
	int m, n;
	m = n = 0;
	while ((a = getchar()) != EOF)
	{
		if (isalpha(a)) {
			m++;
		}
		if (!isspace(a)&&!s) {
			s = 1;
			n++;
		}
	    if (isspace(a) && s) {
			s = 0;
		}
		else
			;

	}
	average = (float)m / (float)n;
	printf("\n%d,%d,%g", m, n, average);

	return 0;

}