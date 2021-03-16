#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define JIBEN 1000
#define JIA 1.5
#define WORK 40

int main() {
	float ave, tax, m;
	float a;
	printf("please input woker hours:");
	scanf("%f", &a);
	if (a < WORK) {
		ave = JIBEN * a;
		if (ave < 300)
		{
			tax = ave * 0.15;
			m = ave - tax;
		}
		else
		{
			float i, j;
			i = 300 * 0.15;
			j = (ave - 300) * 0.2;
			tax = i + j;
			m = ave - tax;
		}
	}
	else
	{
		ave = JIBEN * WORK + ((float)a - WORK) * JIA * JIBEN;
		float i, j;
		i = 300 * 0.15;
		j = (ave - 300) * 0.2;
		tax = i + j;
		m = ave - tax;

	}
	printf("ave:%f\ntax:%f\nm:%f\n", ave, tax, m);

	return 0;
}