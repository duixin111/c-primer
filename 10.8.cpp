
#include<stdio.h>

void copy_arr(double a[], double b[], int n);
void show_arr(double a[], int n);
int main() {
	double a[7] = { 7,3,5,9,6,2,4 };
	double b[3];

	copy_arr(b, a + 2, 3);
	show_arr(b, 3);

	return 0;
}

void copy_arr(double a[], double b[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = b[i];
	}
	printf("\n");
}

void show_arr(double a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%-5g", a[i]);
	}
	printf("\n");
}