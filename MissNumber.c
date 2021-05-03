#include<stdio.h>

int missingNumber(int* nums, int numsSize){
    int sum = 0, i;
    for(i = 1; i < numsSize + 1; i++){
        sum  +=  i - nums[i - 1] ;
    }
    return sum;
}

int main()
{
    int a[] = { 9,6,4,2,3,5,7,0,1 };
    int n = sizeof(a) / sizeof(a[0]);
    int MissNumber = missingNumber(a, n);
    printf("%d", MissNumber);
    return 0;
}

	
