/*
Problem: Find maximum number of consecutive 1s in a binary array

Algorithm:
1. Initialize count = 0 (current streak of 1s)
2. Initialize max = 0 (maximum streak found)
3. Traverse the array from i = 0 to n-1:
      a. If arr[i] == 1:
            - Increment count
            - Update max if count > max
      b. Else:
            - Reset count to 0
4. Return max

Time Complexity:
O(n)   // single traversal of array

Space Complexity:
O(1)   // constant extra space used
*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter element of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",max(arr,n));
    return 0;
}