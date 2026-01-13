
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int* findErrors(int arr[], int n, int *returnSize) {
    int *res = (int *)malloc(sizeof(int) * 2); // one duplicate, one missing
    qsort(arr, n, sizeof(int), cmp);

    int duplicate = -1, missing = -1;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i-1]) {
            duplicate = arr[i];
            
            break;
        }
    }

    // find missing
    for (int i = 1; i <=n; i++) {
        
        for(int j=0;j<n;j++)
        {
            if(i==arr[i])break;
            else missing=i;
        

        }

    }

    res[0] = duplicate;
    res[1] = missing;
    
    return res;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k = 0;
    int *res = findErrors(arr, n, &k);

    printf("Duplicate: %d, Missing: %d\n", res[0], res[1]);
    

    free(res);
    return 0;
}
