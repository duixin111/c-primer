#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main() {
//	char a;
//	int m, n;
//	int i = 1;
//	while ((scanf("%c", &a) == 1) != EOF) {
//		i++; 
//		if (i == 10)
//			printf("\n");
//		if (a == '\n') {
//			printf("\\n");
//		}else if (a == '\t')
//			printf("\\t");
//
//		printf("%d", a);
//	}
//}
#include <stdio.h>

int main(void)
{
    int ch;
    int i = 0;

    printf("Please enter some characters:\n");
    while ((ch = getchar()) != EOF)
    {
        if (i++ == 10)
        {
            putchar('\n');
            i = 1;
        }
        if (ch >= 32) //空格的十进制ASCII码;
        {
            printf(" \'%c\' - %3d ", ch, ch);
        }
        else if (ch == '\n')
        {
            printf(" \\n - \\n\n ");
            i = 0;
        }
        else if (ch == '\t')
        {
            printf(" \\t - \\t ");
        }
        else
        {
            printf(" \'%c\' - ^%c ", ch, ch + 64);
        }
    }
    puts("Done.");

    return 0;
}
