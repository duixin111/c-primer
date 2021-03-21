#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void chline(char ch, int i, int j);
int main() {

	char ch;
	int time, line;

	printf("ch=");
	scanf("%c", &ch);
	printf("time:");
	scanf("%d", &time);
	printf("line:");
	scanf("%d", &line);
	chline(ch, time, line);

	return 0;

}
void chline(char ch, int i, int j) {
	for (int m = 0; m < j; m++) {
		for (int n = 0; n < i; n++)
			printf("%c", ch);
		printf("\n");
	}
}