#include<stdio.h>

int FindData(int arr[][5], int row, int col, int target)
{
	int i = 0;
	int j = col - 1;
	while (i < row && j >= 0)
	{
		if (target > arr[i][j]){
			i++;
		}
		else if (target < arr[i][j]){
			j--;
		}
		else{
			return arr[i][j];
		}
	}
	return -1;
}
int main()
{
	int ar[][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	int row = sizeof(ar) / sizeof(ar[0]);
	int m = FindData(ar, row, 5, 10);
	if (m == -1)
		printf("number isn't find.!");
	else
		printf("ar have %d.\n", m);

	return 0;
}