
#include<stdio.h>
#define ROW 3
#define COL 5
void input(double a[], int n);
double average(double a[], int n);
double sum_ave(double a[][COL], int n);
double max(double a[][COL], int n);
int main() {
	double a[ROW][COL];
	double sum, ave;
	for (int i = 0; i < ROW; i++) {           //a.
		printf("第%d组数据是：", i + 1);
		input(a[i], COL);
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%lf\t", a[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < ROW; i++)           //b.
		printf("第%d组平均值为:%lf\n", i + 1, average(a[i], 3));

	printf("所有数据的平均值:%lf\n", sum_ave(a, ROW));   //c.

	printf("数据中最大值为：%lf\n", max(a, ROW));


	return 0;
}
void input(double a[], int n) {
	for (int i = 0; i < n; i++) {
		scanf_s("%lf", &a[i]);
	}
}
double average(double a[], int n) {
	double ave = 0;
	for (int i = 0; i < n; i++) {
		ave += a[i];
	}
	return ave / n;
}

double sum_ave(double a[][COL], int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < COL; j++) {
			sum += a[i][j];
		}
	}
	return sum / (COL * n);
}

double max(double a[][COL], int n) {
	double max = a[0][0];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < COL; j++) {
			max = max <= a[i][j] ? a[i][j] : max;
		}
	}

	return max;
}
