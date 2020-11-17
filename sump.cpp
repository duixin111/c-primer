#include<stdio.h>

#define SIZE 10

int sump(int* start,int *end);

int main()
{
	long sum;
	int a[SIZE] = {1,2,3,4,5,6,7,8,9,};

	sum = sump(a,a+SIZE-1);

	printf("sum=%d\n",sum);

	return 0;


}

int sump(int* start, int* end)
{
	long sum=0;
	while (start < end)
	{
		sum += *start;
		start++;
	}

	return sum;
}
