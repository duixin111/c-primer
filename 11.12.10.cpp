
#include<stdio.h>
#include<string.h>
int strlen1(const char* a);

int main() {
	const char a[15] = "ma jia hao!";
	printf("%d\n", strlen1(a));
	printf("%d", strlen(a));


	return 0;

}
int strlen1(const char* a) {
	int i = 0;
	while (*a++) {
		i++;
	}
	return i;
}