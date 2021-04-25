#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF&&n>=100&&n<=600)
    {
        switch(n)
        {
            case 200:
               
                printf("OK\n");
                break;

            case 202:
                printf("Accepted\n");
                break;
            case 400:
                printf("Bad Request\n");
                break;
            case 403:
                printf("Forbidden\n");
                break;
            case 404:
                printf("Not Found\n");
                break;
            case 500:
                printf("Internal Server Error\n");
                break;
            case 502:
                printf("Bad Gateway\n");
                break;
                default:
                printf("please input again:");
        }
    }
    return 0;
}