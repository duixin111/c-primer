#include<stdio.h>
int main() {
	int x = 1,y =1, z = 1;
	if (x < y)z++;
	if (x < y)
		if (y > 0)z--;
		else z++;
	printf("%d", --z);

	return 0;
}
