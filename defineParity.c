#include<stdio.h>

#define BitParity(n) (((n) & 0x55555555) << 1 | ((n) & 0xaaaaaaaa) >> 1)

int main()
{
	int a = 55;
	printf("%d", BitParity(a));
	return 0;
}