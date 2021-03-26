#include <stdio.h>
#include <string.h>
int main(void)
{
	char food[] = "Yummy";
	char* ptr;
	int n = strlen(food);
	printf("%d", n);
	ptr = food + strlen(food);
	while (--ptr >= food)
		puts(ptr);
	return 0;
}