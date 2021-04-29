#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int SLString2(char a[], char b[]);

int main()
{
	char a[] = "abcd1234";
	int len = strlen(a);
	char b[20];
	gets(b);
	//SLString(a, len, m);
	int m = SLString2(a, b);
	printf("%d", m);
	return 0;
}
int SLString2(char a[], char b[])
{
	
	char ar[256] = "";
	strcpy(ar, a);
	strcat(ar, a);
	if (strstr(ar, b) == NULL)
		return 0;
	else
		return 1;
}

