/*
Problem: Find the largest element in an array

Algorithm:
1. Start
2. Initialize max = arr[0]
3. Traverse the array from index 1 to n-1
4. For each element:
      if arr[i] > max
            max = arr[i]
5. Return max
6. End

Time Complexity:
O(n)   // we check each element once

Space Complexity:
O(1)   // no extra space used
*/
#include<stdio.h>
int max(int arr[],int n)
{
    int m=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
        }
        
    }
    return m;
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
    printf("%d",max(arr,n));
    return 0;
}