#include <stdio.h>
char* pr(char* str)
{
	char* pc;
	pc = str;
	while (*pc)
		puts(pc++);
	do {
		putchar(*--pc);
	} while (pc - str);
	return (pc);
}

int main() {
	const char* x;
	char a[] = "Hole Ho!";
	x = pr(a);

	return 0;
}