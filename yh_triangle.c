#include<stdio.h>


#define N 10
int main()
{
	int n;
	int a[N][N];

	printf("low is:");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
		a[i][1] = a[i][i] = 1;
	for (int i = 3; i <= n; i++)
	{
		for (int j = 2; j < i; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	printf("\n");

	return 0;
}