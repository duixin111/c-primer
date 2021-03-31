#include<stdio.h>
#include<ctype.h>

#define SIZE 15
void get_input2(char* input);

int main() {
    char a[SIZE];
    get_input2(a);

    fputs(a, stdout);

    return 0;
}

void get_input2(char* input)
{
    char ch = 0;
    int i = 0;
    printf("Enter the word:");
    do
    {
        ch = getchar();
        if (!isblank(ch))
        {
            break;
        }
    } while (1);

    input[i++] = ch;
    do
    {
        ch = getchar();
        if (isblank(ch))
        {
            break;
        }
        input[i++] = ch;
    } while (1);

    input[i] = '\0';
}