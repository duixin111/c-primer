#include <stdio.h>                                                                                                                            
#include <stdbool.h>

int my_atoi(const char* src)
{
    int s = 0;
    bool isMinus = false;

    while (*src == ' ')  //�����հ׷�
    {
        src++;
    }

    if (*src == '+' || *src == '-')
    {
        if (*src == '-')
        {
            isMinus = true;
        }
        src++;
    }
    else if (*src < '0' || *src > '9')  //�����һλ�Ȳ��Ƿ���Ҳ�������֣�ֱ�ӷ����쳣ֵ
    {
        s = 2147483647;
        return s;
    }

    while (*src != '\0' && *src >= '0' && *src <= '9')
    {
        s = s * 10 + *src - '0';
        src++;
    }
    return s * (isMinus ? -1 : 1);
}

int main()
{
    int num;

    char* str = "-123456";
    //num = my_atoi(str);
    num = my_atoi(str);
    printf("atoi num is: %d \r\n", num);

    return 0;
}