#include<stdio.h>
void leader(int arr[],int n)
{
    int flag=1;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            printf("%d ",arr[i]);
        }
        if(flag==0)
        {
            flag=1;
        }
    }
    printf("%d",arr[n-1]);
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
    leader(arr,n);
    return 0;
}