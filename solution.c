#include<stdio.h>
#include<malloc.h>

int main()
{
	int a[] = { 5,2,14,2,5,8 };
	int n = sizeof(a) / sizeof(a[0]);
	int value = 0;
	int i = 0;
	for (; i < n; i++)
		value ^= a[i];
	value = value & ((-1) * value);
	int v1 = 0, v2 = 0;
	for (i = 0; i < n; i++)
	{
		if ((a[i] & value) == 0)
			v1 ^= a[i];
		else
			v2 ^= a[i];
	}
	printf("%d %d\n", v1, v2);

	return 0;
}