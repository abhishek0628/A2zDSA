//problem statement
/*Given an integer array nums, rotate the array to the left by one.

Note: There is no need to return anything, just modify the given array.

*/
#include<stdio.h>
void reverse(int arr[],int start,int end){
    if(start>end)return;
    if(start<end){
        int t=arr[start];
        arr[start]=arr[end];
        arr[end]=t;
        reverse(arr,start+1,end-1);
    }
}
void kleftrotate(int arr[],int n,int k){
    reverse(arr,0,n-1);
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
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
    int k;
    scanf("%d",&k);
    kleftrotate(arr,n,k);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}