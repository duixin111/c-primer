
#include<stdio.h>

int max_index(double a[], int n);
int main() {
	double a[10] = { 1,5,3,2,6,4,8,7,9,0 };
	printf("array is:");
	for (int i = 0; i < 10; i++) {
		printf("%3g", a[i]);
	}

	printf("\nmax index :%d", max_index(a, 10));

	return 0;

}
int max_index(double a[], int n) {
	int max = a[0];
	int MAX;
	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
			MAX = i;
		}
	}
	return MAX;
}