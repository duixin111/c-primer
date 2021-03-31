#include<stdio.h>
#include<ctype.h>
#define SIZE 15

void get_word2(char* a, int n);

int main() {
	char a[SIZE];
	int n;
	printf("please input max number of char:");
	scanf_s("%d", &n);
	get_word2(a, n);

	puts(a);

	return 0;
}

void get_word2(char* a, int n) {
	int i = 0;
	char ch;
	
	printf("please input a word:");
	
	do {
		ch = getchar();
		if (!isblank(ch))
			break;
	} while (1);
	
	a[i++] = ch;
	
	do {
		ch = getchar();
		if (isblank(ch))
			break;
		a[i++] = ch;
		if (i > n - 2)
			break;
	} while (1);

	a[i] = '\0';
}
