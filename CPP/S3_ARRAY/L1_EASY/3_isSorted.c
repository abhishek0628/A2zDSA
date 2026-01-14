#include<stdio.h>
int isSorted(int arr[],int n)
{
    if(arr[1]>arr[0])
    {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]<arr[i])return 0;
        }
        return 1;
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]>arr[i])return 0;
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
    int r=isSorted(arr,n);
    if(r==0)printf("no");
    else printf("yes");
    return 0;

}