#include <stdio.h>
#include <limits.h>
#include "MySort.h"
#include "Heap.h"


//稳定  时间复杂度：O(n^2)  空间复杂度：O(1)
void InsertSort(int array[], int size)
{
	for (int i = 1; i < size; i++)
	{
		int end = i - 1;
		int tmp = array[i];
		while (tmp >= 0 && tmp < array[end])
		{
			array[end + 1] = array[end];
			end--;
		}
		array[end + 1] = tmp;
	}
}

//不稳定  时间复杂度：O(n log n)~O(n^2)   空间复杂度:O(1)
void ShellSort(int array[], int size)
{
	int interval = size;
	while (interval > 1)
	{
		interval = interval / 3 + 1;
		for (int i = interval; i < size; i++)
		{
			int end = i - interval;
			int tmp = array[i];
			while (tmp >= 0 && tmp < array[end])
			{
				array[end + interval] = array[end];
				end -= interval;
			}
			array[end + interval] = tmp;
		}
	}
}

//稳定  时间复杂度：O(n^2)  空间复杂度：O(1)
void SelectSort(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int max = 0;
		for (int j = 1; j < size - i; j++)
		{
			if (array[j] >= array[max])
				max = j;
		}
		Swap(&array[max], &array[size - i]);

	}
}

void QuickSort(int array[], int size)
{

}

void CountSort(int array[], int size);

void HeapSort(int array[], int size);

void BubbleSort(int array[], int size);

//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}