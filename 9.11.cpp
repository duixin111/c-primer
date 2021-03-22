#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int Fibonacci(int a);
int main() {
	int a, b;
	printf("请输入算出第几项：");
	while (scanf("%d", &a) == 1 || a > 2) {
		b=Fibonacci(a);
		for(int i=a;i>0;i--)
		printf("%d", b);
	}

	return 0;
}
int Fibonacci(int a) {
	if (a == 1)
		return 0;
	if (a == 2)
		return 1;
	return Fibonacci(a - 1) + Fibonacci(a - 2);
	

}