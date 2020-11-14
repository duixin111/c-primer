#include<stdio.h>

void change(int* u, int* v);

int main()
{
	int n = 10;
	int m = 5;
	
	printf("n=%p,m=%p\n", &n, &m);
	printf("n=%d,m=%d\n", n, m);

	change(&n,&m);

	printf("n=%p,m=%p\n",&n,&m);
	printf("n=%dm=%d\n", n, m);

	return 0;

}

void change(int* u, int* v)
{
	int t;

	t = *u;
	*u = *v;
	*v = t;

}
