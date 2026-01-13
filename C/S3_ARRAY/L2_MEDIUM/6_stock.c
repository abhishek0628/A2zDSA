#include<stdio.h>

int maxprofit(int arr[],int n)
{


    int minindex=0;
    int maxindex=0;
    

    int s=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<s)
        {
            s=arr[i];
            minindex=i;
        }
    }
    int max=arr[minindex];
    for(int i=minindex;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            maxindex=i;
        }
    }
    
    return arr[maxindex]-arr[minindex];
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
    printf("%d",maxprofit(arr,n));
    return 0;
}