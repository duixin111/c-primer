#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, c;
	char b;
	int z = 56;
	printf("please input a figure:");
	scanf("%d", &a);
	while (a != z) {
		printf("�´��˻��ǲ�С�ˣ���d;С��x����");
		scanf("%c", &b);
		if (b == 'd') {
			a = (a - 50) / 2 + a;

		}
		else if (b == 'x')
		{
			a = (a - 50) * 2 + a;
		}

		printf("%d\n", a);


	}
	printf("��¶��ˣ�");

	return 0;
}