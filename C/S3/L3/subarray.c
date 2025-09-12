#include <stdio.h>

void printSubarrays(int arr[], int n) {
    // Pick starting point
    for (int start = 0; start < n; start++) {
        // Pick ending point
        for (int end = start; end < n; end++) {
            // Print subarray from start to end
            printf("[");
            for (int k = start; k <= end; k++) {
                printf("%d", arr[k]);
                if (k < end) printf(", ");
            }
            printf("]\n");
        }
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("All subarrays:\n");
    printSubarrays(arr, n);

    return 0;
}
