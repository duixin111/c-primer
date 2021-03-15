#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int a, b, c, ave1, ave2;//a 输入字符，b 偶数个数，c奇数个数
	a = b = c = ave1 = ave2 = 0;
	
	while (((scanf("%d", &a) == 1) && a != 0)){
		if ((a % 2) == 0) {
			b++;
			ave1 += a;
		}
		else
		{
			c++;
			ave2 += a;
		}
	}
	//float d, e;
	printf("%d\t%f\n", b,(float) ave1 / b);

	printf("%d\t%f\n", c, (float)ave2 / c);

	return 0;
}