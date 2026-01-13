#include<stdio.h>
int isMaxHeap(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        int left=2*i+1;
        int right=2*i+2;
        if(arr[left]>arr[i]|| arr[right]>arr[i])
        {
            return 0;
        }
    }
    return 1;
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
    printf("%d",isMaxHeap(arr,n));
    return 0;
}