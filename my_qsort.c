#include<stdio.h>
#include<string.h>
void print(int* ar, size_t n);
void my_qsort(void* base,
	size_t num,
	size_t width,
	int (*compare)(const void* elem1, const void* elem2));

int int_comp(const void* e1, const void* e2);
int main()
{
	const int ar[] = { 9,8,6,4,3,1,2,4,7,0 };
	int n = sizeof(ar) / sizeof(ar[0]);
	my_qsort(ar, n, sizeof(int), int_comp);
	print(ar, n);
	return 0;
}
void my_qsort(void* base, size_t num, size_t width,
	int (*compare)(const void* elem1, const void* elem2))
{
	void* tmp = malloc(width);
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			if (compare((char*)base + j * width,
				(char*)base + (j + 1) * width) > 0)
			{
				memcpy(tmp, (char*)base + j * width, width);
				memcpy((char*)base + j * width, (char*)base + (j + 1) * width, width);
				memcpy((char*)base + (j + 1) * width, tmp, width);
			}
		}
	}
	free(tmp);
}
int int_comp(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
void print(int* ar, size_t n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", ar[i]);
}