#include<stdio.h>
#include<malloc.h>
#include<memory.h>
#include<assert.h>


#define SIZE 5

void* my_realloc(void* memblock, size_t size);
int main()
{
	int* pa = (int*)malloc(sizeof(int) * SIZE);
	assert(pa != NULL);
	for (int i = 0; i < SIZE; i++)
		pa[i] = i + 1;
	for (int i = 0; i < SIZE; i++)
		printf("%d ", pa[i]);
	putchar('\n');
	pa = (int*)my_realloc(pa, sizeof(int) * 10);
	for (int i = SIZE; i < 10; i++)
		pa[i] = i + 1;
	for (int i = 0; i < 10; i++)
		printf("%d ", pa[i]);
	putchar('\n');
	return 0;
}
void* my_realloc(void* memblock, size_t size)
{
	void* new_base = malloc(size);
	assert(new_base != NULL);
	memcpy(new_base, memblock, size);
	free(memblock);
	return new_base;
}