#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
void to_base_n(int a, int b);

int main() {
	int a, b;
	
	while (scanf("%d %d", &a, &b) == 2) {
		to_base_n(a, b);
		putchar('\n');
	}
	

	return 0;
}
void to_base_n(int a, int b) {
	int m;
	m = a % b;
	
	if (a > b) {
		to_base_n(a / b, b);
	}
	printf("%d", m);

}