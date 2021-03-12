//////#include<stdio.h>
////// void jolly();
////// void deny();
//////int main() {
//////	for (int i = 0; i < 3; i++)
//////		jolly();
//////	deny();
//////	return 0;
//////}
//////void jolly() {
//////	printf("123\n");
//////}
//////void deny() {
//////	printf("111\n");
//////}
////#include<stdio.h>
////int main() {
////	int a = 10;
////	printf("a=%-d\n", a);
////	printf("a*a=%d\n", a * a);
////	printf("2a=%2d\n",2*a);
////
////	return 0;
////}
////#include<stdio.h>
////int main() {
////	int a;
////
////	scanf_s("%d",&a);
////
////	printf("%c",a);
////
////
////	return 0;
////}
////#include<stdio.h>
////int main() {
////	printf("\a");
////
////	printf("hello word");
////
////	return 0;
////}
//#include<stdio.h>
////int main() {
////	float a;
////	scanf_s("%f",&a);
////	printf("%f\n",a );
////
////	printf("%e\n",a);
////
////	printf("%a\n",a);
////
////	return 0;
////}
//#define m 3.156e7
//int main() {
//
//	/*long int ages;
//	scanf_s("%ld",&ages);
//
//	printf("%e",ages*m);
//	printf("he sold the painting for $%2.2f.\n", 2.345e2);*/
//	printf("%c%c%c\n", 'h', 105, '\41');
//	printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);
//
//
//	return 0;
//
//}
//#include<stdio.h>
//int main() {
//
//	char a[20];
//
//	scanf_s("%s",a[20]);
//
//	printf("%s",a);
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void)
{
    int len = 0;
    char name[20];

    printf("Please enter your name:");
    scanf("%s",name);
    getchar();
    len = strlen(name);
    printf("Print your name:\n");
    printf("a.\"%s\"\n", name);
    printf("b.\"%s\"\n", name);
    printf("c.\"%s\"\n", name);
    printf("d.%*s\n", len + 3, name);

    return 0;
}/*
int main(void)
{
int a;
scanf("%d",&a);
printf("%d",a);
return 0;

}*/
