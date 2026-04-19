/*
Problem: Rotate an array to the right by K positions

Algorithm:
1. Read array arr of size n
2. Read rotation value k
3. Compute k = k % n   // handle k > n
4. Reverse the entire array
5. Reverse the first k elements
6. Reverse the remaining n - k elements
7. Array is now rotated to the right by k positions

Time Complexity:
O(n)   // each element is reversed at most a constant number of times

Space Complexity:
O(1)   // in-place rotation, only constant extra space used

Note:
- In-place operation (no extra array used)
*/
#include<stdio.h>
void reverse(int arr[],int start,int end)
{
    if(start==end)return;
    if(start<=end)
    {
    int t=arr[start];
    arr[start]=arr[end];
    arr[end]=t;
    reverse(arr,start+1,end-1);
    }
}
void krotate(int arr[],int n,int k)
{
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
}

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
    int k;
    printf("enter k: ");
    scanf("%d",&k);
    krightrotate(arr,n,k);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}