#include<stdio.h>
#include<limits.h>
int max(int arr[],int n)
{
    int m=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
        }
        
    }
    return m;
}
int secondlargest(int arr[],int n)
{
    if(n<2)return -1;
    int m=max(arr,n);
    int s=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>s && arr[i]<m)
        {
            s=arr[i];
        }
    }
    return s;
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
    printf("%d",secondlargest(arr,n));
    return 0;
}