#include<stdio.h>
#include<stdlib.h>
void minheapify(int arr[],int n,int i)
{
    int left=2*i+1;
    int right=2*i+2;
    int largest=i;
    if(left<n && arr[left]<arr[largest])
    {
        largest=left;
    }
    if(right<n && arr[right]<arr[largest])
    {
        largest=right;
    }
    if(i!=largest)
    {
        int t=arr[largest];
        arr[largest]=arr[i];
        arr[i]=t;
        heapify(arr,n,largest);
    }
}
int extractmin(int arr[],int *n)
{
    if(*n<=0)return -1;
    int min=arr[0];
    arr[0]=arr[*n-1];
    (*n)--;
    heapify(arr,*n,0);
    return min;

}
int kthlargest(int arr[],int n,int k)
{
    for(int i=n/2-1;i>=0;i--)
    {
        minheapify(arr,n,i);
    }
    int min=-1;
    for(int i=0;i<k;i++)
    {
        min=extractmin(arr,&n);
    }
    return min;
}