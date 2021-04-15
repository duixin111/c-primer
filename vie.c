#include<stdio.h>

int main()
{
    char ch;
    int a = 0, b = 0;
    while ((ch = getchar()) != '0')
    {
        if (ch == 'A')
            a++;
        if (ch == 'B')
            b++;
    }
    char m[20];
    
    if (a == b)
        putchar('E');
    else if (a > b)
        putchar('A');
    else
        putchar('B');

    return 0;
}