#include<stdio.h>
void sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

    }
}
int maximum(int arr[],int n)
{
    int max=0;
    int count=0;
    sort(arr,n);
    int j=0;
    for(int i=1;i<n;i++)
    {
        // count++;
        if(arr[i]==arr[i-1]+1)
        {
            count++;
        }
        else if(arr[i]!=arr[i-1])
        {
            if(count>max)
            max=count;
            count=0;
        }
    }
    return max+1;
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
    printf("%d",maximum(arr,n));
    return 0;
}