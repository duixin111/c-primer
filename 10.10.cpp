#include<stdio.h>

void doubled(double (*a)[5], int n);
void show_arr(double (*a)[5], int n);
int main() {
    double a[3][5] = { {1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15} };

   show_arr(a, 3);
   doubled(a, 3);
   show_arr(a, 3);
	
}
void show_arr(double (*a)[5], int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%-5g", a[i][j]);
        }
        putchar('\n');
    }
    return;
}
void doubled(double (*a)[5], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] *= 2;
        } 
    }
    printf("\n");
}