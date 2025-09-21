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
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=n/2-1;i>=0;i--)
    {
        maxheapify(arr,n,i);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}