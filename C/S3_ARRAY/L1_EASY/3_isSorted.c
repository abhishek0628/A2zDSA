/*
Problem:
Check if an array is sorted in non-decreasing order.

Algorithm:
1. Start
2. Traverse the array from index 0 to n-2
3. For each index i:
      if arr[i] > arr[i+1]
            return False
4. If no such pair is found, return True
5. End

Time Complexity:
O(n)   // single pass through array

Space Complexity:
O(1)   // constant extra space
*/
#include <stdio.h>

int isSorted(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int r = isSorted(arr, n);

    if(r == 0)
        printf("no");
    else
        printf("yes");

    return 0;
}