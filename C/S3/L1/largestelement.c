#include<stdio.h>
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