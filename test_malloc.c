#include<stdio.h>
#include<malloc.h>
#include<memory.h>
#include<assert.h>




/*
//柔性 数组 成员
typedef struct Test
{
	int len;
	char str[0];
}Test;

void main()
{
	char *string = "abcXYZjflkafklajfklajflajfljfla";
	int len = strlen(string);

	Test *pt = (Test*)malloc(sizeof(Test) + len+1);

	pt->len = len;
	strcpy(pt->str, string);

	printf("len = %d, str = %s\n", pt->len, pt->str);

	free(pt);
}

/*
typedef struct Test
{
	int len;
	char *str;
}Test;

void main()
{
	char *string = "abcXYZfjalflajfla";
	int len = strlen(string);

	Test *pt = (Test*)malloc(sizeof(Test));
	pt->str = (char*)malloc(sizeof(char) * (len+1));

	pt->len = len;
	strcpy(pt->str, string);

	printf("len = %d, str = %s\n", pt->len, pt->str);

	free(pt->str);
	free(pt);
}


/*
void main()
{
	char string[] = "abcXYZ";
	Test t;

	printf("%s\n", t.str);
}

/*
void main()
{
	char *string = "abcXYZ";
	Test t;
	t.str = (char*)malloc(sizeof(char) * (strlen(string)+1));
	t.len = strlen(string);
	strcpy(t.str, string);

	printf("t.str = %s\n", t.str);
}


typedef struct Test
{
	char a;
	double b;
	int c[0];   //不占空间
}Test;

void main()
{
	printf("size = %d\n", sizeof(Test));
}

/*
void Test(void)
{
	char *str = (char *)malloc(100);
	strcpy(str, "hello");
	free(str);
	//str = NULL;

	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
void main()
{
	Test();
}

/*
void GetMemory(char **p, int num)
{
	*p = (char *)malloc(num);
}

void Test(void)
{
	char *str = NULL;
	GetMemory(&str, 100);

	strcpy(str, "hello");
	printf(str);

	free(str);
}

void main()
{
	Test();
}

/*
char *GetMemory(void)
{
	static char p[] = "hello world";
	return p;
}
void Test(void)
{
	char *str = NULL;
	str = GetMemory();

	printf(str);
}
void main()
{
	Test();
}

/*
void GetMemory(char* *p)
{
	*p = (char *)malloc(100);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(&str);

	strcpy(str, "hello world");
	printf(str);
}
void main()
{
	Test();
}





/*
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
	memcpy(new_base, memblock,size);
	free(memblock);
	return new_base;
}





/*
int main()
{
	int* pa = (int*)malloc(sizeof(int) * SIZE);
	assert(pa != NULL);
	for (int i = 0; i < SIZE; i++)
		pa[i] = i + 1;
	printf("\n");
	pa = (int*)realloc(pa, sizeof(int) * 10);
	assert(pa != NULL);
	for (int i = 0; i < SIZE; i++)
		printf("%d ", pa[i]);
	for (int i = SIZE; i < 10; i++)
		pa[i] = i + 1;
	for (int i = SIZE; i < 10; i++)
		printf("%d ", pa[i]);

	free(pa);
	pa = NULL;
	return 0;
}

/*
int main()
{
	int* pa = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
		printf("%d", *(pa + i));
	putchar('\n');
	int* pb = (int*)calloc(10, sizeof(int));
	for (int i = 0; i < 10; i++)
		printf("%d ", pb[i]);
	free(pa);
	free(pb);
	pb = pa = NULL;
	return 0;
}
/*
void main()
{
	int n;
	printf("input n:>");
	scanf_s("%d", &n);

	int *pa = (int*)malloc(sizeof(int)*n);
	//int* pa = (int*)calloc(n, sizeof(int));
	if (pa == NULL)
	{
		printf("Out Of Memory.\n");
		return;
	}

	for (int i = 0; i < n; ++i)
	{
		pa[i] = i + 1;
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d ", pa[i]);
	}
	printf("\n");

	free(pa);
	pa = NULL;

}
/*
int main()
{
	int n;
	printf("please input a number:");
	scanf_s("%d", &n);
	int* pa = (int*)malloc(sizeof(int) * n);
	if (pa == NULL)
	{
		printf("out of memory.\n");
		return -1;
	}
	for (int i = 0; i < n; i++)
		pa[i] = i;
	for (int i = 0; i < n; i++)
		printf("%d ", pa[i]);
	free(pa);
	pa = NULL;

	return 0;
}
*/