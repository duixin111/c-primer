#define _CRT_SECURE_NO_WARNINGS
#define YI 8.75
#define ER 9.33
#define SAN 10
#define SI 11.20
#define JIBEN 0.15
#define XU 0.2

#include<stdio.h>

int main() {
	int a;

	float wage, tax, ave;
	wage = tax = ave = 0;

	while ((a = mezu()) != 'q') {

		switch (a)
		{
		case 'a':
			printf("please input work:");
			scanf("%d", &a);
			wage = a * YI;
			break;

		case 'b':
			printf("please input work:");
			scanf("%f", &a);
			wage = a * ER;

			break;

		case 'c':
			printf("please input work:");
			scanf("%f", &a);
			wage = a * SAN;

			break;

		case 'd':
			printf("please input work:");
			scanf("%f", &a);
			wage = a * SI;

			break;
		default:
			printf("«Î’˝»∑ ‰»Î£°");
			break;
		}
		if (wage < 300) {
			tax = wage * JIBEN;
			ave = wage - tax;
			printf("you wage:%f\ttax:%f\tave:%f\n", wage, tax, ave);
		}
		else
		{
			tax = 300 * JIBEN + ((double)wage - 300) * XU;
			ave = wage - tax;
			printf("you wage:%f\ttax:%f\tave:%f\n", wage, tax, ave);
		}
	}
	return 0;
	
}
int mezu() {
	int ch;
	printf("a:$8.75/hr\tb:$9.33/hr\nc:$10.00/hr\td:$11.20/hr\nq:quit\n");
	printf("please select:");

	ch = getchar();
	while (ch != 'a' && ch != 'b' && ch != 'c' && ch != 'd' && ch != 'q') {
		printf("please input a,b,c,d or q:\n");
		ch = getchar();
	}

	return ch;

}