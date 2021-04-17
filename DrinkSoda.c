#include<stdio.h>

int Num(int money);
int Num2(int money);

int main()
{
	int bottle = Num(20);
	printf("can drink %d bottle.\n", bottle);

	return 0;
}
int Num2(int money)
{	
	int bottle = money / 1;
	int num = money / 1;
	while (bottle > 1)
	{
		num = num + bottle / 2;
		bottle = bottle / 2 + bottle % 2;
	}
	return num;
}
int Num(int money)
{
	int num = money / 1;
	static int flag = 0;
	if (flag == 1 && num == 1)
		return 1;
	if (flag == 1)
		num -= 1;
	flag = num % 2;
	return num + Num(num / 2 + flag);
}
