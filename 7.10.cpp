#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	float wage, tax, ave, b;
	wage = tax = ave = b = 0;
	int a=0;
	
	printf("1.����\n2.����\n3.�ѻ飬����\n4.�ѻ飬����\n");
	printf("���������");
	while (scanf("%d", &a) == 1 && a != '#') {
		if (a > 4 || a < 1)
		{
			printf("����ȷ���룡");
			break;
		}
		printf("�����빤�ʣ�");
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
			printf("\n����ȷ����!\n");
			break;
		}
		if (wage < b) {
			tax = wage * 0.15;
			ave = wage - tax;
			printf("˰���ǣ�%f\t�����ǣ�%f\n", tax, ave);

		}
		else
		{
			tax = b * 0.15 + ((double)wage - b) * 0.28;
			ave = wage - tax;
			printf("˰���ǣ�%f\t�����ǣ�%f\n", tax, ave);

		}
		printf("1.����\n2.����\n3.�ѻ飬����\n4.�ѻ飬����\n");
		printf("���������");

	}
	return 0;
}