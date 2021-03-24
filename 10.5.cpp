
#include<stdio.h>

double difference(double a[], int n);
int main() {
	double arr[10] = { 5,6,4,2,3,1,8,9,7,0 };

	printf("array is:");
	for (int i = 0; i < 10; i++) {
		printf("%3g", arr[i]);
	}
	printf("\n");
	printf("difference is:%g", difference(arr, 10));

	return 0;
}

double difference(double a[], int n) {
	double max, min;
	max = min = a[0];
	for (int i = 0; i < n; i++) {
		max = max < a[i] ? a[i] : max;
		min = min > a[i] ? a[i] : min;
	}
	return max - min;
}