#include<stdio.h>
#include <math.h>
int main()
{
	int val;
	int f1 = 0, f2 = 1, f;
	int dif1, dif2;
	scanf("%d", &val);
	if (val == 0)
	{
		printf("0");
		return 0;
	}
	while (1)
	{
		f = f1 + f2;
		if (val <= f)
			break;
		f1 = f2;
		f2 = f;

	}
	dif1 = f - val;
	dif2 = val - f2;
	int dif = fmin(dif1, dif2);
	printf("%d", dif);
	return 0;
}