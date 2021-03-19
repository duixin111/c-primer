#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, c;
	char b;
	int z = 56;
	printf("please input a figure:");
	scanf("%d", &a);
	while (a != z) {
		printf("猜大了还是猜小了（大：d;小：x）：");
		scanf("%c", &b);
		if (b == 'd') {
			a = (a - 50) / 2 + a;

		}
		else if (b == 'x')
		{
			a = (a - 50) * 2 + a;
		}

		printf("%d\n", a);


	}
	printf("你猜对了！");

	return 0;
}