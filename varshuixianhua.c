#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool shuixianhua(int n);
int main()
{

    for (int i = 10000; i <= 99999; i++)
        if (shuixianhua(i))
            printf("%d ", i);

    return 0;
}
bool shuixianhua(int n)
{
    int sum = 0;

    for (int i = 1; i < 5; i++)
    {
        int a1 = n % (int)(pow(10, (int)(5 - i)));
        int a2 = n / (int)(pow(10, (int)(5 - i)));
        sum += a1 * a2;
    }
    if (sum == n)
        return true;
    else
        return false;
}