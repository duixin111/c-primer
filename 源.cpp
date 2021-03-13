//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void Temperatures(double h);
//int main() {
//	double h;
//
//	printf("please input h:");
//
//	while (scanf("%lf", &h) == 1)
//		Temperatures(h);
//
//	return 0;
//
//}
//void Temperatures(double h) {
//	const double S_X = 32;
//	const double K_X = 273.16;
//
//	double S, K;
//	S = 5.0 / 9.0 * (h - S_X);
//	K = h + 273.16;
//	printf("S:%lf\n", S);
//	printf("K:%lf\n", K);
//	printf("please input h:");
//
//}
#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//
//int main() {
//	for(double value = 36; value > 1; value /= 2)
//		printf("%3f", value);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	for (int i = 1; i < 5; i++) {
//		for (int j = 0; j < i; j++)
//			printf("$");
//		printf("\n");
//	}
//	return 0;
////}
//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	while (++i < 4)
//		printf("Hi! ");
//	do
//		printf("Bye! ");
//	while (i++ < 8);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("%c",ch);
//	while (ch != 'g')
//	{
//		printf("%c", ch);
//		scanf("%c", &ch);
//
//	}
//	return 0;
//	
//}
//#include<stdio.h>
//int main() {
//	int a[26];
//	for (int i = 0; i < 26; i++)
//		a[i] = 97 + i;
//	for (int i = 0; i < 26; i++)
//		printf("%c",a[i]);
//	
//	return 0;
//
//}
//#include<stdio.h>
//int main() {
//	for (int i = 0; i < 6; i++) {
//		for (int j = 0; j <= i; j++)
//			printf("%c", 70-j);
//		printf("\n");
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main() {
//	int a = 65;
//	for (int i = 0; i < 6; i++) {
//		for (int j = 0; j <= i; j++)
//			printf("%c",a ++);
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//#define MAX 21
//int main() {
//	char a;
//	
//
//	printf("please input a letter:");
//	scanf("%c", &a);
//	int b = a - 'A' + 1;
//	for (int i = 0; i < b; i++) {
//		char c = 'A' - 1;
//		for (int j = 0; j < b - i; j++)
//			printf(" ");
//		for (int j = 0; j <= i; j++) {
//		
//			printf("%c", ++c);
//		}
//		for (int j = 0; j < i; j++)
//			printf("%c", --c);
//		printf("\n");
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int a, b;
//	printf("please input top:");
//	scanf("%d", &a);
//	printf("please input bottom:");
//	scanf("%d", &b);
//	printf("\ta\ta*a\ta*a*a\n");
//	for (int i = 0; i <= b - a; i++) 
//		printf("%10d%10d%10d\n", a, a * a, a * a * a);
//	return 0;
//}
//#include<stdio.h>
////#include<stdlib.h>
//#include<string>
//int main() {
//	char a[20];
//
//	printf("please input:");
//	scanf("%s", a);
//	printf("you input is:%s\n",a);
//
//	int m=strlen(a);
//	for (int i = m-1; i>=0; i--) {
//		printf("%c", a[i]);
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	float a, b;
//
//	printf("please input two float:");
//	while (scanf("%f %f", &a, &b)==2) {
//		printf("%f\n", (a - b) / (a * b));
//		printf("please input two float:");
//
//	}
//
//	return 0;
//
//}
//#include<stdio.h>
//float result(float a, float b);
//int main() {
//	float m,n,l;
//
//	printf("please input two float:");
//	while (scanf("%f %f", &m, &n) == 2) {
//		l = result(m, n);
//		printf("%f\n", l);
//		printf("please input two float:");
//
//	
//	}
//	return 0;
//
//}
//float result(float a, float b) {
////	printf("%f\n", (a - b) / (a * b));
//	return (a - b) / (a * b);
//}
#include<stdio.h>
int main() {

}