#include<stdio.h>
#include<math.h>

int main() {
	int t;
	for (int i = 100; i <= 200; i++) {
		t = sqrt(i);
		int j;
		for (j = 2; j <= t; j++) {
			if (i % j == 0)
				break;					
		}
		if (j > t)
			printf("%d\t",i);
	}
	return 0;
}