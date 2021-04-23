#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdbool.h>





void* my_memcpy(void* dest, const void* src, size_t count);
int main()
{
	char str1[20] = "abcdefghij";
	char *str2 = "XYZABC";
	//printf("%d", strlen(str2));
	my_memcpy(str1, str2, strlen(str2) + 1);
	printf("%s", str1);
	return 0;
}
void* my_memcpy(void* dest, const void* src, size_t count)
{
	assert(dest != NULL && src != NULL);
	char* pdest = (char*)dest;
	const char* psrc = (const char*)src;
	if (pdest >= psrc + count || pdest <= psrc)
	{
		while (count--)
			*pdest++ = *psrc++;
	}
	else
	{
		pdest = pdest + count - 1;
		psrc = psrc + count - 1;
		while (count--)
			*pdest-- = *psrc--;
	}
	return dest;
}


/*
int my_memcmp(const void* buf1, const void* buf2, size_t count);
int main()
{
	char str1[20] = "abcdefghij";
	char str2[] = "XYZABC";

	int flag = my_memcmp(str1, str2, 2);
	printf("%d", flag);
	return 0;
}
int my_memcmp(const void* buf1, const void* buf2, size_t count)
{
	assert(buf1 != NULL && buf2 != NULL);
	const char* pbuf1 = (char*)buf1;
	const char* pbuf2 = (char*)buf2;
	int ret = 0;
	while (count--)
	{
		ret = *pbuf1 - *pbuf2;
		if (ret != 0)
			break;
		pbuf1++;
		pbuf2++;
	}
	return ret;
}
/*
void* my_memset(void* dest, int c, size_t count)
{
	assert(dest != NULL);

	char* pdest = (char*)dest;
	while (count-- != 0)
	{
		*pdest++ = c;
	}
	return dest;
}
int main()
{
	int ar[5] = { 0 };
	int br[10];
	my_memset(ar, 0, sizeof(int) * 5);
	return 0;
}
/*
void* my_memset(void* dest, int c, size_t count);
int main()
{
	int ar[5];
	int br[10];
	my_memset(ar, 0, sizeof(ar)*5);

}
void* my_memset(void* dest, int c, size_t count)
{
	assert(dest != NULL);
	char* pdest = (char*)dest;
	while (count--)
		*pdest++ = c;
	return dest;
}


/*
void main()
{
	int ar[10] = { 12,83,54,45,56,67,78,89,90,100 };
	int br[10] = { 12,53,84,45,56,67,78,89,90,100 };

	int flag = memcmp(ar, br, sizeof(int) * 2);
	printf("flag = %d\n", flag);
}
/*
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,0 };
	int b[10];
	memset(b, 0, sizeof(int) * 10);
	memcpy(b, a, sizeof(int) * 10);
	return 0;
}

/*
int main()
{
	char a[20] = "1304177717@qq.com";

	char* pch = strtok(a, "@");
	printf("%s\n", pch);

	pch = strtok(NULL, ".");
	printf("%s", pch);

	return 0;
}
/*
int main()
{
	char str[] = "- This a sample string.";
	char* pch;
	pch = strtok(str, " .-,");
	while (pch != NULL)
	{
		printf("%s\n", pch);
		pch = strtok(NULL, " ,.-");
	}
	return 0;
}


/*
char* my_strstr(const char* string, const char* strCharSet);
int main()
{
	char a[20] = "majiahaoa";
	const char* b = "ji";
	char* m = strstr(a, b);
	if (m == NULL)
		;
	else
		printf("%s", m);

	return 0;
}


char* my_strstr(const char* string, const char* strCharSet)
{
	assert(string != NULL && strCharSet != NULL);
	const char* dest = string;
	const char* src = strCharSet;
	int i, j;
	i = j = 0;
	while (dest[i] != '\0' && src[j] != '\0')
	{
		if (dest[i] == src[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	if (src[j] == '\0')
		return (char*)(dest + i - j);
	return NULL;
}


/*
void* my_memmove(void* dest, const void* src, size_t count);


int main()
{
	char dest[20] = "majiahao";
	char src[20] = "yangygege";

	memmove(dest, src, 3);
	puts(dest);
	return 0;
}
*/