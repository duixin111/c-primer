#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define JU  '.'
#define GAN '!'

int main() {
	char a;
	while (scanf("%c", &a) == 1 && a!= '#') {
		switch (a)
		{
		case JU : 
			printf("!");
			break;
		case GAN:
			printf("!!");
			break;
		default:
			printf("%c", a);
			break;
		}


	}
	return 0;
}
