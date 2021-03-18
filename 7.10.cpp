#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	float wage, tax, ave, b;
	wage = tax = ave = b = 0;
	int a=0;
	
	printf("1.单身\n2.户主\n3.已婚，共有\n4.已婚，离异\n");
	printf("请输入类别：");
	while (scanf("%d", &a) == 1 && a != '#') {
		if (a > 4 || a < 1)
		{
			printf("请正确输入！");
			break;
		}
		printf("请输入工资：");
		scanf("%f", &wage);
		
		switch (a)
		{
		case 1:
			b = 17850;
			break;
		case 2:
			b = 23900;
			break;
		case 3:
			b = 23900;
			break;
		case 4:
			b = 14875;
			break;
		default:
			printf("\n请正确输入!\n");
			break;
		}
		if (wage < b) {
			tax = wage * 0.15;
			ave = wage - tax;
			printf("税金是：%f\t收入是：%f\n", tax, ave);

		}
		else
		{
			tax = b * 0.15 + ((double)wage - b) * 0.28;
			ave = wage - tax;
			printf("税金是：%f\t收入是：%f\n", tax, ave);

		}
		printf("1.单身\n2.户主\n3.已婚，共有\n4.已婚，离异\n");
		printf("请输入类别：");

	}
	return 0;
}