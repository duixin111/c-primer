#include<stdio.h>
#define MAX 10
void getarr(char* a, int n);

int main() {
	char a[MAX];

	getarr(a, MAX);
	fputs(a, stdout);

	return 0;
}
void getarr(char* a, int n) {
	int i = 0;
	while (i < n - 1) {
		a[i] = getchar();
		i++;
	}
	a[i] = '\0';

}