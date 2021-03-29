#include<stdio.h>
char* spacing(char* a);
int main() {
	char a[] = "ma jia hao!";
	char* b = spacing(a);
	printf("%s", b);

	return 0;
}
char* spacing(char* a) {
	while (*a != ' ' && *a != '\0') 
		a++;
	if (*a == '\0')
		return NULL;
	else
		return a;	
}