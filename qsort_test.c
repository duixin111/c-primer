#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Student
{
	int id;
	char name[10];
	int age;
}Student;
//void my_qsort(void* base, size_t num, size_t width, int(__cdecl* compare)(const void* elem1, const void* elem2));
//int(__cdecl* compare)(const void* elem1, const void* elem2);
int int_comp(const void* e1, const void* e2);
int char_comp(const void* e1, const void* e2);
int str_comp(const void* e1, const void* e2);
int stu_comp(const void* e1, const void* e2);
int main() 
{
	char* ar[] = { "fal","fafja","abc","xyz","fhalLLFdal", "DHDkfn" };
	int n = sizeof(ar) / sizeof(ar[0]);
	for (int i = 0; i < n; i++)
		printf("%s  ", ar[i]);
	putchar('\n');
	qsort(ar, n, sizeof(char*), str_comp);
	for (int i = 0; i < n; i++)
		printf("%s  ", ar[i]);
	putchar('\n');

	int br[] = { 23,12,125,563,43,4,54,667,24,256 };
	n = sizeof(br) / sizeof(br[0]);
	for (int i = 0; i < n; i++)
		printf("%d  ", br[i]);
	putchar('\n');

	qsort(br, n, sizeof(int), int_comp);
	for (int i = 0; i < n; i++)
		printf("%d  ", br[i]);
	putchar('\n');

	Student cr[] = { {2000, "附近阿里",20},{1010,"发",25},{1530,"经历过",30} };
	n = sizeof(cr) / sizeof(cr[0]);

	qsort(cr, n, sizeof(Student), stu_comp);
	for (int i = 0; i < n; i++)
		printf("%d  ", cr[i].id);
	putchar('\n');

	return 0;
}
int int_comp(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
int char_comp(const void* e1, const void* e2)
{
	return (*(char*)e1 - *(char*)e2);
}
int str_comp(const void* e1, const void* e2)
{
	return strcmp(*(char**)e1, *(char**)e2);
}
int stu_comp(const void* e1, const void* e2)
{
	return (((Student*)e1)->id - ((Student*)e2)->id);
}





















//int (*fun[])(int, int) = {   };
//int Find(int a, int b, int(*fun)(int, int))
//{
//	return (*fun)(a, b);
//}
