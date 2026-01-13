#include <stdio.h>
#include <stdlib.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m - 1;      // pointer for nums1 valid part
    int j = n - 1;      // pointer for nums2
    int k = m + n - 1;  // merge position

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // Copy remaining nums2 elements
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int arr1[m + n];   // must have capacity m+n
    int arr2[n];

    // read first m elements of arr1
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    // pad remaining n positions with 0
    for (int i = m; i < m + n; i++) {
        arr1[i] = 0;
    }

    // read arr2
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    merge(arr1, m + n, m, arr2, n, n);

    for (int i = 0; i < m + n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    return 0;
}
