#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	float m, n, l, o, m1, n1, l1, o1, ave1 = 0;
	m = n = l = o = m1 = n1 = l1 = o1 = 0;
	int i = 0;
	float ave = 0;
	char c;	
	printf("�����붩�������ࣺ");
	while (scanf("%c", &c) == 1 && c != '#') {
	
		switch (c)
		{
		case 'a':
			printf("\n�����붩����������");
			scanf("%f", &m);
			m1 += m;
			ave += (m * 2.05);
			printf("�����붩�������ࣺ");
			break;
		case 'b':
			printf("\n�����붩����������");
			scanf("%f", &n);
			n1 += n;
			ave += (n * 1.15);
			printf("�����붩�������ࣺ");
			break;
		case 'c':
			printf("\n�����붩����������");
			scanf("%f", &l);
			l1 += l;
			ave += (l * 2.05);
			printf("�����붩�������ࣺ");
			break;
		case 'd':
			printf("\n�����붩����������");
			scanf("%f", o);
			o1 += o;
			ave += (o * 2.05);
			printf("�����붩�������ࣺ");
			break;
		default:
			break;

		}
	}
	float  youhui=0;
	ave1 = m1 + n1 + l1 + o1;
		if (ave < 100) {
			;
		}
		else
		{
			ave = ave - (ave * 0.05);
			 youhui = ave * 0.05;
		}
		if (ave1 <= 5) {
			ave += 6.5;
		}
		else if (ave1 > 5 && ave1 <= 20) {
			ave += 14;
		}
		else
		{
			ave = 14 + 0.5 * (ave1 - 20);
		}
		printf("%f\n%f\n%f\n%f\n%f\n%f", ave, m1, n1, l1, o1, youhui);
	return 0;
}