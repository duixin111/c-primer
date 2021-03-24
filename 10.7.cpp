
#include<stdlib.h>
#include<stdio.h>

void copy_array(double a[], double b[], int n);

int main() {
	double a[2][5] = { 1,5,3,2,6,4,8,7,9,0 };
	double b[2][5];
	printf("array a is:");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3g", a[i][j]);
		}
	}
	printf("\n");
	printf("array b is:");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3g", b[i][j]);
		}
	}
	for (int i = 0; i < 2; i++) {
		copy_array(a[i], b[i], 5);
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3g", a[i][j]);
		}
	}
	printf("\n");
	printf("array b is:");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3g", b[i][j]);
		}
	}
	return 0;
}

void copy_array(double a[], double b[], int n){
	for (int i = 0; i < n; i++) {
		b[i] = a[i];
	}
}

//#include <stdio.h>
//#define N 2
//#define M 3
//
//void copy_arr(const double a[], double b[], int n);
//void show_array(double(*x)[M], int n);
//
//int main(void)
//{
//    int i;
//    double a[N][M] =
//    {
//        {1.0, 2.0, 3.0},
//        {4.0, 5.0, 6.0}
//    };
//    double b[N][M] = { 0.0 };
//
//    printf("Array a:\n");
//    show_array(a, N);
//    printf("Array b:\n");
//    show_array(b, N);
//    for (i = 0; i < N; i++)
//    {
//        copy_arr(a[i], b[i], M);
//    }
//    printf("Copying array a to array b is:\n");
//    show_array(b, N);
//
//    return 0;
//}
//
//void copy_arr(const double a[], double b[], int n)
//{
//    int i;
//
//    for (i = 0; i < n; i++)
//    {
//        b[i] = a[i];
//    }
//    return;
//}
//
//void show_array(double(*x)[M], int n)
//{
//    int i, j;
//
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < M; j++)
//        {
//            printf("%-5g", x[i][j]);
//        }
//        putchar('\n');
//    }
//    return;
//}
