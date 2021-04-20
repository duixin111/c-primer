#include<stdio.h>

int ADD(int a, int b)
{
	return a + b;
}
int SUB(int a, int b) {
	return a - b;
}
int MUL(int a, int b) {
	return a * b;
}
int DIV(int a, int b) {
	return a / b;
}
int MOD(int a, int b) {
	return a % b;
}
void menu()
{
	printf("**********************************\n");
	printf("*         简 易 计 算 器         *\n");
	printf("**********************************\n");
	printf("* [1]  Add          [2] Sub      *\n");
	printf("* [3]  Mul          [4] Div      *\n");
	printf("* [5]  Mod          [0] Quit     *\n");
	printf("**********************************\n");

}
int (*fun[])(int, int) = { NULL,ADD,SUB,MUL,DIV,MOD };
int main()
{
	int op1, op2, result;
	int select = 1;
	while (select)
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &select);
		if (select == 0)
			break;

		printf("请输入操作数 op1 和 op2:>");
		scanf_s("%d %d", &op1, &op2);

		result = fun[select](op1, op2);
		result = fun[select](op1, op2);

		printf("result = %d\n", result);

	}
	printf("Good Bye!!!\n");
}