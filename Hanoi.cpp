#include<stdio.h>

void move(char a, char b);
void hanoi(int n, char a, char b, char c);

int main() {
	int n;

	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');

	return 0;
}
void hanoi(int n, char a, char b, char c) {
	if (n == 1) {
		move(a, c);
	}
	else
	{
		hanoi(n - 1, a, c, b);
		move(a, c);
		hanoi(n - 1, b, a, c);
	}
}
void move(char a, char b) {
	printf("%c-->%c\n", a, b);
}