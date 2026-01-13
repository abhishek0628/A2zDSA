#include<stdio.h>
void maxheapify(int arr[],int n,int i)
{
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n&& arr[left]>arr[largest])
    {
        largest=left;
    }
    if(right<n && arr[right]>arr[largest])
    {
        largest=right;
    }
    if(i!=largest)
    {
        int t=arr[largest];
        arr[largest]=arr[i];
        arr[i]=t;
        maxheapify(arr,n,largest);
    }

}
void heapsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        maxheapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        int t=arr[i];
        arr[i]=arr[0];
        arr[0]=t;
        maxheapify(arr,i,0);
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
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
    heapsort(arr,n);
    display(arr,n);
    return 0;
}