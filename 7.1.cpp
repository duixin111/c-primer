#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, c;
	a = b = c = 0;
	int d;

	while ((d = getchar()) != '#') {

		if (d == ' ') {
			a++;
		}
		else if (d == '\n')
		{
			b++;
		}
		else if (d != ' ' && d != '\n') {
			c++;
		}
	}

	printf("a:%d\nb:%d\nc:%d\n", a, b, c);

	return 0;



}