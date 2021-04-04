#include<stdio.h>

int main() {
	double sum = 0;
	int flag = 1;
	for (int i = 1; i <= 100; i++) {
		 
			sum += (flag / (double)i);
			flag *= -1;
		
	}
	printf("ºÍÎª£º%lf", sum);
}