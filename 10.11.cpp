#include <stdio.h>

#define MONTHS 12 // 一年的月份数
#define YEARS 5 // 年数

void year_subtot(const float (*a)[MONTHS], int n);
void average(const float (*a)[MONTHS], int n);

int main(void)
{
	// 用2010～2014年的降水量数据初始化数组
	const float rain[YEARS][MONTHS] =
	{
	{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5,
	6.6 },
	{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4,
	7.3 },
	{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1,
	8.4 },
	{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3,
	6.2 },
	{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6,
	5.2 }
	};
	//int year, month;
	//float subtot, total;

	year_subtot(rain, YEARS);
	average(rain, YEARS);

	return 0;
}
void year_subtot(const float(*a)[MONTHS], int n) {
	int year, month;
	float subtot, total;
	for (year = 0, total = 0; year < YEARS; year++) {
		for (month = 0, subtot = 0; month < MONTHS; month++) {
			subtot += a[year][month];
		}
		total += subtot;
		printf("%d年降水量为：%f\n", 2010 + year, total);
	}
	printf("%d年平均降水量为：%f\n", 2010 + year, total / year);

}
void average(const float (*a)[MONTHS], int n) {
	int year, month;
	float subtot, total;
	for (month = 0, total = 0; month < MONTHS; month++) {
		for (year = 0, subtot = 0; year < YEARS; year++) {
			subtot += a[year][month];
		}
		total += subtot;
		printf("%d月平均降水量为：%f\n", month + 1, total / year);
	}

}