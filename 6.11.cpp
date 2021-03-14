#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string>
int main() {
	int a[8] = {};
	for (int i = 0; i < 8; i++) {
		printf("请输入第%d个值：", i + 1);
		scanf("%d", &a[i]);
	}
	int b = sizeof(a) / sizeof(int);
	for (int i = b - 1; i >= 0; --i)
		printf("%d", a[i]);

	return 0;

}