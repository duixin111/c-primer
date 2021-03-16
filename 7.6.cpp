#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char a;
	int i = 0;
	int s = 0;
	while (scanf("%c", &a) == 1 && a != '#') {
		switch (a)
		{
		case 'e':
			s = 1;
			break;
		case 'i':
			if (s == 1)
				i++;
			break;
		default:
			s = 0;
			break;
		}
	}
	printf("%d", i);
	return 0;
}