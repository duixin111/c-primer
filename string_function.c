//#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

#include<assert.h>
#include<string.h>

#include "../../MyCode.h"
char* my_strncat(char* strDest, const char* strSource, size_t count);
int main()
{
	char a[20] = "majiahao";
	char* b = "yangyemmmmmmm";
	my_strncat(a, b, 3);
	puts(a);

	return 0;
}

char* my_strncat(char* strDest, const char* strSource, size_t count)
{
	assert(*strDest != NULL && *strSource != NULL);
	char* tmpDest = strDest;
	while (*tmpDest != '\0')
		tmpDest++;
	while (count--)
	{
		*tmpDest++ = *strSource++;
	}
	*tmpDest = '\0';

	return strDest;
}


/*
char* my_strstr(const char* string, const char* strCharSet);

int main()
{
	char a[20] = "majiahaoaiyangyege";
	char* b = "yangyege";
	char* m = strstr(a, "jia");
	printf("%s", m);
	return 0;
}




/*
int my_strncmp(const char* string1, const char* string2, size_t count);
int main()
{
	char a[20] = "majiahao";
	char* b = "maj";
	int res = my_strncmp(a, b, 3);

	printf("%d", res);
	return 0;
}
int my_strncmp(const char* string1, const char* string2, size_t count)
{
	assert(string1 != NULL && string2 != NULL);
	const char* str1 = string1;
	const char* str2 = string2;
	int res = 0;
	while (count--)
	{
		while (*str1 != '\0' || *str2 != '\0')
		{
			res = *str1 - *str2;
			if (res != 0)
				break;
			str1++;
			str2++;
		}
	}
	return res;
}
/*
char* my_strncpy(char* strDest, const char* strSource, size_t count);

int main()
{
	char a[20] = "majiammmmmmmmhao";
	char b[] = "yangyeggggggggggge";
	my_strncpy(a, b, 8);
	puts(a);
	return 0;
}
char* my_strncpy(char* strDest, const char* strSource, size_t count)
{
	assert(*strDest != NULL && strSource != NULL);
	char* tmpDest = strDest;
	char* tmpSource = strSource;
	while (count--)
	{
		if (*tmpSource == '\0')
		{
			*tmpDest++ = *tmpSource;
			while (count--)
			{
				*tmpDest++ = 0;
				
			}
			break;

		}
		*tmpDest++ = *tmpSource++;

	}
	return strDest;
}



/*
int my_strcmp(const char* string1, const char* string2);
int main()
{
	char a[] = "majiahao";
	char b[] = "majiahao";
	int n = my_strcmp(a, b);
	printf("%d", n);
	return 0;
}
int my_strcmp(const char* string1, const char* string2)
{
	assert(string1 != NULL && string2 != NULL);

	int ret = 0;

	while (*string1 != '\0' || *string2 != '\0')
	{
		ret = *string1 - *string2;
		if (ret != 0)
			break;
		string1++;
		string2++;
	}
	return ret;
}



/*
char* my_strcat(char* strDestination, const char* strSource);

int main()
{
	char a[20] = "majiahao";
	char b[10] = "yangyege";
//	strcat(a, b);
	my_strcat(a, b);
	puts(a);
}
char* my_strcat(char* strDestination, const char* strSource)
{
	assert(strDestination != NULL && strSource != NULL);
	char* tmpDes = strDestination;
	const char* tmpSource = strSource;
	while (*tmpDes != '\0')
		tmpDes++;
	while (*tmpSource != '\0')
		*tmpDes++ = *tmpSource++;
	*tmpDes = '\0';
	return strDestination;
}




/*
size_t my_strlen(const char* string);
int main()
{
	char* a = "majiahao";
	int str = my_strlen(a);
	printf("%d", str);

	return 0;
}
size_t my_strlen(const char* string)
{
	assert(string != NULL);
	if (*string == 0)
		return 0;
	size_t count = 0;
	while (*string++ != 0)
		count++;
	return count;
}



/*
char* my_strcpy(char* strDestination, const char* strSource);
int main()
{
	char a[20];
	char b[] = "majiahao111";
	my_strcpy(a, b);

	puts(a);

	return 0;
}
char* my_strcpy(char* strDestination, const char* strSource)
{
	assert(strDestination != NULL && strSource != NULL);
	char* tmpDestination = strDestination;
	while (*tmpDestination++ = *strSource++);
	*tmpDestination = '\0';
	return strDestination;
}


/*
int add(int a, int b) { return a + b; }
int Find(int a, int b, int (*fun)(int a, int b)) { return (*fun)(a, b); }
void PrintArr(int arr[], int n);
int my_comp(const void* e1, const void* e2);
int main()
{
	int ar[] = { 23,12,125,563,43,4,54,667,24,256 };
	int n = sizeof(ar) / sizeof(ar[0]);
	PrintArr(ar, n);
 
	qsort(ar, n,sizeof(int),my_comp);
	PrintArr(ar, n);
	 


	return 0;
}
int my_comp(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
void PrintArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
*/