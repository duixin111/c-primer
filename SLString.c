#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void SLString(char a[], int len, int m);
void SLString2(char a[], int len, int m);

int main()
{
	char a[] = "abcd1234";
	int len = strlen(a);
	int m;
	scanf_s("%d", &m);
	//SLString(a, len, m);
	SLString2(a, len, m);
	return 0;
}
void SLString2(char a[], int len, int m)
{
	m %= len;
	char ar[256] = "";
	strcpy(ar, a);
	strcat(ar, a);
	for (int i = m; i < m + len; i++)
		printf("%c", ar[i]);
}
void SLString(char a[], int len, int m)
{
	m %= len;
	while (m--)
	{
		char tmp = a[0];
		for (int i = 0; i < len - 1; i++)
			a[i] = a[i + 1];
		a[len - 1] = tmp;
	}
}