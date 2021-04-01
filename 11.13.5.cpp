#include<stdio.h>
#include<string.h>

#define SIZE 15
char* strchr1(char* a, char ch);

int main() {
	char a[SIZE];
	char ch;
	printf("please input a array:");
	while(fgets(a, SIZE, stdin)!=NULL){
		printf("Please enter the char than you want to search:");
		ch = getchar();
		if (strchr1(a, ch) == NULL) 
		{
			printf("not exist.");
		}
		else
		{
			printf("exist.");
		}
		printf("please input a array:");

	}
	return 0;
}

char* strchr1(char* a, char ch) {
	while (*a != '\0') {
		if (*a != ch) {
			a++;
		}
		else 
		{
			return a;
		}
	}
	return NULL;
}



