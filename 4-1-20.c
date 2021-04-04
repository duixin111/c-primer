#include<stdio.h>

int main() {
	int n = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 10 == 9)
			n++;
		if (i / 10 == 9)
			n++;
	}
	printf("1-100中含9的数字一共有%d个", n);

	return 0;
}