/*
Problem: Merge two sorted arrays (Union without duplicates)

Algorithm:
1. Initialize two pointers i = 0, j = 0
2. Initialize result array and index k = 0
3. While both arrays have elements:
      a. If arr1[i] < arr2[j]:
            - If result is empty OR last element != arr1[i], add arr1[i]
            - Increment i
      b. Else if arr1[i] > arr2[j]:
            - If result is empty OR last element != arr2[j], add arr2[j]
            - Increment j
      c. Else (both equal):
            - If result is empty OR last element != arr1[i], add once
            - Increment both i and j
4. Add remaining elements of arr1 (checking duplicates)
5. Add remaining elements of arr2 (checking duplicates)
6. Print result array

Time Complexity:
O(n1 + n2)
- Each element is processed at most once

Space Complexity:
O(n1 + n2)
- Extra array used to store merged result

Properties:
- Works on sorted arrays only
- In-place: No (uses extra array)
- Stable: Yes (preserves relative order)
*/
#include <stdio.h>

int main() {
    int arr1[] = {1, 4, 8, 12, 23, 39};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 3, 9, 10, 24, 34};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr[n1 + n2];

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            if (k == 0 || arr[k - 1] != arr1[i])
                arr[k++] = arr1[i];
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            if (k == 0 || arr[k - 1] != arr2[j])
                arr[k++] = arr2[j];
            j++;
        }
        else {
            if (k == 0 || arr[k - 1] != arr1[i])
                arr[k++] = arr1[i];
            i++;
            j++;
        }
    }

    while (i < n1) {
        if (arr[k - 1] != arr1[i])
            arr[k++] = arr1[i];
        i++;
    }

    while (j < n2) {
        if (arr[k - 1] != arr2[j])
            arr[k++] = arr2[j];
        j++;
    }

    for (int p = 0; p < k; p++) {
        printf("%d ", arr[p]);
    }

    return 0;
}