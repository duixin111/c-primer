#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<ctype.h>
int get_char(char ch);

int main() {

	char a;
	int b;
	while (scanf_s("%c", &a) != EOF && a != '\n') {
		printf("%c %d\n",a, get_char(a));
	}

	return 0;

}
int get_char(char ch) {
	int i=-1;
	if (islower(ch)) {
		i = ch - 96;
	}
	if (isupper(ch)) {
		i = ch - 64;
	}
	return i;
}