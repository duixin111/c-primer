
#include<stdio.h>
#include<ctype.h>

#define SIZE 15
void get_char(char* a, int n);
int main() {
	char a[SIZE];

	get_char(a, SIZE);
	puts(a);

	return 0;
}

void get_char(char* a, int n) {
	int i = 0;
	while (i < n - 1) {
		a[i] = getchar();
		if (isspace(a[i]))
			break;
		i++;
	}


	a[i] = '\0';
}