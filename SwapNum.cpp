#include<stdio.h>
int main()
{
    int a, b;
    scanf_s("a=%d,b=%d", &a, &b);
    a ^= b;
    b ^= a;
    a ^= b;
    //a = a ^ b;
    //b = a ^ b;
    //a = a ^ b;
    printf("a=%d,b=%d", a, b);
    return 0;
}