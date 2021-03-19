#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

char menu(void);
void add(void);
void subtract(void);
void multiply(void);
void divide(void);
float input(float a);

int main() {
	char ch;
	float a, b;
	float c;
	while ((ch = menu()) != 'q') {
		switch (ch)
		{
		case 'a':
			add();
			break;
		case 'b':
			subtract();
			break;
		case 'c':
			multiply();
			break;
		case 'd':
			divide();
		default:
			break;
		}

	}

	return 0;
}
char menu(void) {
	char ch;
	printf("请选择：");
	printf("a:+\tb:-\ta:*\td:/\tq:quit\n");
	scanf("%c", &ch);
	while (ch != 'a' && ch != 'b' && ch != 'c' && ch != 'd' && ch != 'q') {
		printf("请重新输入：");
		scanf("%c", &ch);
	}
	return ch;
}
void add(void) {
	float a, b;
	printf("请输入两个值：");
	scanf("%f %f", &a, &b);
	printf("和为：%f\n", a + b);
}
void subtract(void) {
	float a, b;
	printf("请输入两个值：");
	scanf("%f %f", &a, &b);
	printf("差为：%f\n", a - b);
}
void multiply(void) {
	float a, b;
	printf("请输入两个值：");
	scanf("%f %f", &a, &b);
	printf("乘积为：%f\n", a * b);
}
void divide(void) {
	float a, b;
	printf("请输入两个值：");
	scanf("%f %f", &a, &b);
	while (b < 0)
		scanf("%f", &b);
	printf("商为：%f\n", a / b);
}
//float input(float a) {
//
//}

