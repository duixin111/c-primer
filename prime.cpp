#include<stdio.h>
#include<math.h>

int main() {
	int m;
	int i;
	printf("请输入一个数:");
	scanf_s("%d", &m);
	for ( i = 2; i < sqrt(m); i++) {
		if (m % i == 0) 
			break;
	}
	if (i > sqrt(m))
		printf("is prime number");
	else
		printf("isn't prime number");

	return 0;
}