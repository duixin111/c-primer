#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	char a,b,c;
	int i = 0;

	while (scanf("%c", &a) == 1 && a != '#') {
		if (a == '.') {
			a = '!';
			printf("%c", a);
			i++;
		}
		else if (a == '!') {
			printf("!!");
			i++;
		}
		else
		{
			printf("%c", a);
		}

	}
	printf("\n%d", i);

	return 0;


}