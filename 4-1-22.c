#include<stdio.h>

int main() {
	
	int arr[10] = { 2,3,6,5,4,1,9,7,8,10 };
	int max = arr[0];
	for (int i = 0; i < 10; i++) {
		max = max < arr[i + 1] ? arr[i + 1] : max;
	}
	printf("max=%d", max);

	return 0;
}