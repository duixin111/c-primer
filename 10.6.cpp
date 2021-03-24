
#include<stdio.h>

void fall(double a[], int n);
int main() {
	double arr[10] = { 5,6,4,2,3,1,8,9,7,0 };

	printf("array is:");
	for (int i = 0; i < 10; i++) {
		printf("%3g", arr[i]);
	}
	printf("\n");

	fall(arr,10);
	for (int i = 0; i < 10; i++) {
		printf("%3g", arr[i]);
	}


	return 0;
}
void fall(double a[], int n) {
	int t;
	for (int i = 0; i < n / 2; i++) {
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
} 