#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	double arr = 0;
	int n;
	printf("input n:");
	scanf("%d", &n);
	double arr1 = 0;
	for (int i = 1; i <= n; ++i) {
		arr1 = arr1 + 1 / n;


		if (n % 2 == 1) {
			arr = arr + 1 / n;
		}
		else
		{
			arr = arr - 1 / n;
		}
	}
	printf("two:%g", arr);
	printf("onr:%g", arr1);

	return 0;

}