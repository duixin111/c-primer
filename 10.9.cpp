#include<stdio.h>

void add(double a[], double b[], double c[], int n);
void show_arr(double a[], int n);
int main() {
	double a[5] = { 3,2,4,5,6 };
	double b[5] = { 6,3,5,8,9 };
	double c[5];

	add(a, b, c, 5);
	show_arr(c, 5);
}
void show_arr(double a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%-5g", a[i]);
	}
	printf("\n");
}
void add(double a[], double b[], double c[], int n) {
	for (int i = 0; i < n; i++) {
		c[i] = b[i] + a[i];
	}
}
