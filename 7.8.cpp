//#define  _CRT_SECURE_NO_WARNINGS
//#define YI 8.75
//#define ER 9.33
//#define SAN 10
//#define SI 11.20
//#define JIBEN 0.15
//#define XU 0.2
//#include<stdio.h>
//
//int main() {
//	int ca;
//	float a, b, c, d;
//	a = b = c = d = 0;
//	float wage = 0;
//	float tax = 0;
//	float ave = 0;
//	printf("please input select:\n");
//		while (scanf("%d", &ca) == 1 && ca != 5) {
//			switch (ca)
//			{
//			case 1:
//				printf("please input work:");
//				scanf("%f", &a);
//				wage = a * YI;
//				if (wage < 300) {
//					tax = wage * JIBEN;
//					ave = wage - tax;
//					printf("you wage:%f\ttax:%f\tave:%f\n", wage, tax, ave);
//				}
//				else
//				{
//					tax = 300 * JIBEN + ((double)wage - 300) * XU;
//					ave = wage - tax;
//					printf("you wage:%f\ttax:%f\tave:%f\n", wage, tax, ave);
//				}
//				break;
//
//			case 2:
//				printf("please input work:");
//				scanf("%f", &a);
//				wage = a * ER;
//				if (wage < 300) {
//					tax = wage * JIBEN;
//					ave = wage - tax;
//					printf("you wage:%f\ttax:%f\tave:%f\n", wage, tax, ave);
//				}
//				else
//				{
//					tax = 300 * JIBEN + (wage - 300) * XU;
//					ave = wage - tax;
//					printf("you wage:%f\ttax:%f\tave:%f\n", wage, tax, ave);
//				}
//				break;
//
//			case 3:
//				wage = a * SAN;
//				if (wage < 300) {
//					tax = wage * JIBEN;
//					ave = wage - tax;
//					printf("you wage:%f\ttax:%f\tave:%f\n", wage, tax, ave);
//				}
//				else
//				{
//					tax = 300 * JIBEN + (wage - 300) * XU;
//					ave = wage - tax;
//					printf("you wage:%f\ttax:%f\tave:%f\n", wage, tax, ave);
//				}
//				break;
//
//			case 4:
//				wage = a * SI;
//				if (wage < 300) {
//					tax = wage * JIBEN;
//					ave = wage - tax;
//					printf("you wage:%f\ttax:%f\tave:%f\n", wage, tax, ave);
//				}
//				else
//				{
//					tax = 300 * JIBEN + (wage - 300) * XU;
//					ave = wage - tax;
//					printf("you wage:%f\ttax:%f\tave:%f\n", wage, tax, ave);
//				}
//				break;
//
//			default:
//				printf("please input a(1<a<5):");
//				break;
//			}
//			
//
//		}
//		return 0;
//}
#define  _CRT_SECURE_NO_WARNINGS
#define YI 8.75
#define ER 9.33
#define SAN 10
#define SI 11.20
#define JIBEN 0.15
#define XU 0.2
#include<stdio.h>

int main() {
	int ca;
	float a, b, c, d;
	a = b = c = d = 0;
	float wage = 0;
	float tax = 0;
	float ave = 0;
	printf("please input select:\n");
	while (scanf("%d", &ca) == 1 && ca != 5) {
		switch (ca)
		{
		case 1:
			printf("please input work:");
			scanf("%f", &a);
			wage = a * YI;
			break;

		case 2:
			printf("please input work:");
			scanf("%f", &a);
			wage = a * ER;

			break;

		case 3:
			printf("please input work:");
			scanf("%f", &a);
			wage = a * SAN;
		
			break;

		case 4:
			printf("please input work:");
			scanf("%f", &a);
			wage = a * SI;
		
			break;

		default:
			printf("please input a(1<a<5):");
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