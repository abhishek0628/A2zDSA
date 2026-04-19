/*
Problem: Rotate an array to the left by K position

Algorithm:
Steps:
Read array arr of size n
Read rotation value k
Compute k = k % n (to handle large rotations)
Reverse the entire array
Reverse the first n - k elements
Reverse the last k elements
Array is now left rotated by k positions

Time Complexity:
O(n)   // we traverse the array once

Space Complexity:
O(1)   // only one extra variable used

Note:
- In-place operation (array modified directly)
*/
#include<stdio.h>

void reverse(int arr[], int start, int end){
    if(start >= end) return;

    int t = arr[start];
    arr[start] = arr[end];
    arr[end] = t;

    reverse(arr, start + 1, end - 1);
}

void kleftrotate(int arr[], int n, int k){
    k = k % n;  // important fix

    reverse(arr, 0, n - 1);
    reverse(arr, 0, n - k - 1);
    reverse(arr, n - k, n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    kleftrotate(arr, n, k);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}