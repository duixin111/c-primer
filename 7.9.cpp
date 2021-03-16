#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int a, b;
	a = b = 0;
	int arr[30] = {};
	int c;
	printf("please input a integer:");
	scanf("%d", &a);

	b = sqrt(a);
	if (a > 0) { 
		for (int i = 2; i <= a; i++) {
			c = 1;
			for (int j = 2; j <= b; j++)
				if (i % j == 0)
				{
					c = 0;
					break;
				}
			if (c == 1)
				printf("%d\t", i);
		}
	}

	return 0;
}