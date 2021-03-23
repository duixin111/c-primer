

#include<stdio.h>

void copy_arr(double a[], double b[], int n);
void copy_ptr(double a[], double b[], int n);
void copy_ptrs(double a[], double b[], double* n);
void show_arr(double a[], int n);

int main() {
	double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
	double target1[5];
	double target2[5];
	double target3[5];

	printf("source array:\n");
	show_arr(source, 5);

	printf("target1 array:");
	copy_arr(target1, source, 5);
	show_arr(target1, 5);

	printf("target2 array:");
	copy_ptr(target2, source, 5);
	show_arr(target2, 5);

	printf("target3 array:");
	copy_ptrs(target3, source, source + 5);
	show_arr(target3, 5);

	return 0;
}

void show_arr(double a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%-5g", a[i]);
	}
	printf("\n");
}
void copy_arr(double a[], double b[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = b[i];
	}
	printf("\n");
}
void copy_ptr(double a[], double b[], int n) {
	for (int i = 0; i < n; i++) {
		*(a + i) = *(b + i);
	}
	printf("\n");
}
void copy_ptrs(double a[], double b[], double* n) {
	for (int i = 0; i < n - b; i++) {
		*(a + i) = *(b + i);
	}
	printf("\n");
}