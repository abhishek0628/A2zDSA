#include<stdio.h>
int max(int arr[],int n )
{
    int m=arr[0];
    
        for(int i=1;i<n;i++)
        {
            if(arr[i]>m)m=arr[i];
        }
    
    return m;
}
void frequency(int arr[],int n)
{
    int m=max(arr,n);
    int hash[m+1];
    for(int i=0;i<m+1;i++)
    {
        hash[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
   
    int k=hash[0];
    int ele=-1;
    for(int i=0;i<m+1;i++)
    {
        if(hash[i]>k)
        {
            k=hash[i];
            ele=i;
        }

    }
    printf("%d has highest frequency of %d",ele,k);
    
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
    frequency(arr,n);
    return 0;
}