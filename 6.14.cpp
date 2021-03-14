#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	double arr1[8] = {};
	double arr2[8] = {};

	for (int i = 0; i < 8; i++) {
		printf("input %d integer:",i+1);
		scanf("%lf", &arr1[i]);
	}
	arr2[0] = arr1[0];
	for (int i = 1; i < 8; i++) {
		arr2[i] = arr1[i] + arr2[i - 1];
	}
	for(int i=0;i<8;i++)
	printf("%lf\n",arr2[i]);

	return 0;
}