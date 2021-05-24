/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
    int* res = malloc(sizeof(int) * fmax(10, numSize + 1));
    *returnSize = 0;
    for (int i = numSize - 1; i >= 0 || k > 0; --i, k /= 10) {
        if (i >= 0) {
            k += num[i];
        }
        res[(*returnSize)++] = k % 10;
    }

    for (int i = 0; i < (*returnSize) / 2; i++) {
        int tmp = res[i];
        res[i] = res[(*returnSize) - 1 - i];
        res[(*returnSize) - 1 - i] = tmp;
    }
    return res;
}
