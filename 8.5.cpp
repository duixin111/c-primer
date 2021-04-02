#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int up = 200;
	int low = 0;
	int n = 100;
	char ch = 'n';
	printf("I guess it is 100, right(d/x):");
	scanf("%d", &ch);

	while (ch != 'y') {

	//	printf("猜大了还是猜小了（大：d;小：x）：");

		scanf("%c", &ch);
		if (ch == 'd') 
		{
			up = n;
			n = (up + low) / 2;
		}
		else if (ch == 'x')
		{
			low = n;
			n = (up + low) / 2;
		}

		printf("you fancy is %d ?\n", n);
		printf("猜大了还是猜小了（大：d;小：x）：");
		scanf_s("%c", &ch);
	//	getchar();


	}

	printf("你猜对了！");

	return 0;
}
