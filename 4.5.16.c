#include<stdio.h>

void  MultiplicationTable(int n);

int main()
{
	int line;
	
	printf("please input a number:");
	scanf_s("%d", &line);
	MultiplicationTable(line);

	return 0;
}
void  MultiplicationTable(int line)
{
	int row = line;
	for (int i = 1; i <= line; i++)
	{
		for (int j = i; j <= row; j++)
		{
			printf("%d * %d = %-5d", i, j, i * j);
		}
		printf("\n");
	}

}
