#include <stdio.h>
int main()
{
	FILE* fp;
	int i, a[6] = { 1,2,3,4,5,6 };
	fp = fopen("d2.dat", "w+");
	for (i = 0; i < 6; i++)
		fprintf(fp, " %d\n",a [i]);
		rewind(fp);
	for (i = 0; i < 6; i++)
		fscanf(fp, "%d", &a[5 - i]);
	fclose(fp);
	for (i = 0; i < 6; i++)
		printf(" %d,", a[i]);

	return 0;
}