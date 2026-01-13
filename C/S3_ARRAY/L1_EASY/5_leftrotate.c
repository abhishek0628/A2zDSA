#include<stdio.h>
void reverse(int arr[],int start,int end)
{
    if(start==end)return;
    if(start<end)
    {
    int t=arr[start];
    arr[start]=arr[end];
    arr[end]=t;
    reverse(arr,start+1,end-1);
    }
}
void krotate(int arr[],int n,int k)
{
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
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
    int k;
    scanf("%d",&k);
    krotate(arr,n,k);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}