#include<stdio.h>
#include<string.h>

char* s_gets(char* a, int n);

int main() {
	char a[] = "ma jia hao!\ni love you!";
	s_gets(a, 50);
	fputs(a, stdout);

	return 0;
}
char* s_gets(char* a, int n) {
	char* m;
	char* i;
	m = fgets(a, n, stdin);
	if (m) {
		i = strchr(a, '\n');
		if (i) {
			*i = '\0';
		}
		else
		{
			while (getchar() != '\n')
				continue;
		}

	}
	return m;
}