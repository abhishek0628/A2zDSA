/*
Problem: Move all zeros in an array to the end while maintaining order of non-zero elements

Algorithm:
1. Initialize a pointer j = 0
2. Traverse the array from i = 0 to n - 1
3. If arr[i] is not zero:
      assign arr[j] = arr[i]
      increment j
4. After traversal, fill remaining positions from j to n-1 with 0

Time Complexity:
O(n)   // single pass through array

Space Complexity:
O(1)   // in-place modification (no extra array used)

Note:
- Maintains relative order of non-zero elements (stable)
- In-place algorithm
*/
#include<stdio.h>
#include<stdlib.h>
void movezeroes(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j++]=arr[i];
        }
    }
    for(int i=j;i<n;i++){
        arr[i]=0;
    }
}
int main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("element of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    movezeroes(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
