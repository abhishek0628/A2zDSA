#include<stdio.h>
int missing(int arr[],int n)
{
    int hash[n];
    for(int i=0;i<n;i++)
    {
        hash[i]=0;
    }
    for(int i=0;i<n-1;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=1;i<n;i++)
    {
        if(hash[i]==0)return i;
    }
    return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n-1];
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int r=missing(arr,n);
    printf("%d",r);
    return 0;
}