#include<stdio.h>
int insertpos(int arr[],int n,int key)
{
    int l=0;
    int r=n-1;
    while(l<r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]>=key)
        {
            r=mid;
        }
        else l=mid+1;

    }
    return l;
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
    int x;
    scanf("%d",&x);
    printf("%d",insertpos(arr,n,x));
    return 0;
}