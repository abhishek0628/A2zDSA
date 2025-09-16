#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int* majorityElement(int* nums, int numsSize, int* returnSize) {
    int *res = (int*)malloc(sizeof(int) * numsSize);
    int j = 0;

    qsort(nums, numsSize, sizeof(int), cmp);

    int count = 1;
    for (int i = 1; i <= numsSize; i++) {
        if (i < numsSize && nums[i] == nums[i-1]) {
            count++;
        } else {
            if (count > numsSize / 3) {
                res[j++] = nums[i-1];
            }
            count = 1;
        }
    }

    *returnSize = j;
    return res;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=0;
   int *res= majorityElement(arr,n,&j);
    for(int i=0;i<j;i++)
    {
        printf("%d ",res[i]);
    }
    return 0;
}