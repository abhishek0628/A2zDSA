/*
Problem: Remove duplicates from a sorted array (in-place)

Algorithm:
1. Start
2. If array is empty, return 0
3. Use a pointer i = 0 (slow pointer for unique elements)
4. Traverse array with j from 1 to n-1
5. If arr[j] != arr[i]:
        i++
        arr[i] = arr[j]
6. Return i + 1 as the number of unique elements (k)
7. End

Time Complexity:
O(n)   // single traversal of array

Space Complexity:
O(1)   // in-place, no extra array used
*/
#include<stdio.h>
#include<stdlib.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;
    int j = 0; // index for unique elements

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1; // new size
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
    int newsize=removed(arr,n);
    for(int i=0;i<newsize;i++){
        printf("%d ",arr[i]);
    }
    return 0;
    
}