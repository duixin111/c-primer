#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>





#if 0
void main()
{
	int ar[10];

	FILE* fp = fopen("Test3.txt", "rb");
	if (fp == NULL)
	{
		printf("Open Test1.txt Error.\n");
		return;
	}

	fread(ar, sizeof(int), 10, fp);
	for (int i = 0; i < 10; i++)
		printf("%d ", ar[i]);

	fclose(fp);
}


void main()
{
	int ar[] = {12,23,34,45,56,67,78,89,90,100};
	int n = sizeof(ar) / sizeof(ar[0]);

	FILE *fp = fopen("Test3.txt", "wb");
	if(fp == NULL)
	{
		printf("Open Test1.txt Error.\n");
		return;
	}

	fwrite(ar, sizeof(int), n, fp);

	fclose(fp);
}

int main()
{
	int ar[10];
	FILE* fp = fopen("test3.txt", "rb");
	if (fp == NULL)
	{
		printf("open test3.txt error.\n");
		return -1;
	}
	fread(ar, sizeof(int), 10, fp);
	fclose(fp);
	return 0;
}


int main()
{
	int ar[] = { 1,2,3,4,5,6,7,8,9 };
	int n = sizeof(ar) / sizeof(ar[0]);
	FILE* fp = fopen("test3.txt", "wb");
	if (NULL == fp)
	{
		printf("open test3.txt error.\n");
		return -1;
	}
	fwrite(ar, sizeof(int), n, fp);
	fclose(fp);

	return 0;
}

int main()
{
	FILE* fpIn = fopen("test.c", "r");
	assert(fpIn != NULL);
	FILE* fpOut = fopen("myTest.c", "w");lb
	assert(fpOut != NULL);
	char ch[256] = { 0 };
	char* res = fgets(ch, 256, fpIn);
	while (res != NULL)
	{
		fputs(res, fpOut);
		res = fgets(ch, 256, fpIn);
	}
	printf("end of copy.\n");
	fclose(fpIn);

	return 0;
}

int main()
{
	FILE* fpIn = fopen("test.c", "r");
	assert(fpIn != NULL);
	FILE* fpOut = fopen("myTest.c", "w");
	assert(fpOut != NULL);
	char ch = fgetc(fpIn);
	while (ch != EOF)
	{
		fputc(ch, fpOut);
		ch = fgetc(fpIn);
	}
	printf("copy over.\n");
	fclose(fpIn);
	fclose(fpOut);

	return 0;
}

int main()
{
	char ar[100] = { 0 };
	FILE* fp = fopen("test2.txt", "a");
	assert(fp != NULL);
	while (1)
	{
		gets(ar);
		if (strcmp(ar, "exit") == 0)
			break;
		fputs(ar, fp);
		fputc('\n', fp);
	}

	fclose(fp);
	return 0;
}


int main()
{
	int ar[100] = { 0 };
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("open test.txt error.\n");
		return -1;
	}
	for (int i = 0; i < 10; i++)
		fscanf(pf, "%d", &ar[i]);

	fclose(pf);

	return 0;
}

int main()
{
	int ar[] = { 12,23,34,45,56,67,78,89 };
	int n = sizeof(ar) / sizeof(ar[0]);

	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("open test.txt error.\n");
		return -1;
	}
	for (int i = 0; i < n; i++)
	{
		fprintf(pf, "%d ", ar[i]);
	}
	fclose(pf);

	return 0;
}
#endif // 0
