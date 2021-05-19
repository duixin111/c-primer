void reverse(int num[], int start, int end)
{
    while (start < end)
    {
        int tmp = num[start];
        num[start] = num[end];
        num[end] = tmp;
        start++;
        end--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    k %= numsSize;
    reverse(nums, 0, numsSize - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, numsSize - 1);
}