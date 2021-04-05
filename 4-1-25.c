#include<stdio.h>

int main() {
	int n;
	printf("please input a number:");
	scanf_s("%d", &n);
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < 10; i++) {
		if (i == n) {
			printf("this array have a number,it's a[%d]", i);
			return 0;
		}
	}
	printf("this array not have a number.");
	return 0;
}