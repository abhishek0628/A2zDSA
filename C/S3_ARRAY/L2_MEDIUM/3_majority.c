// }//problem statement
/*Problem Statement: Given an integer array nums of size n, return the majority element of the array.

The majority element of an array is an element that appears more than n/2 times in the array. 
The array is guaranteed to have a majority element.*/
#include<stdio.h>
#include<limits.h>
int max(int arr[],int n){
    int m=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>m){
            m=arr[i];
        }
    }
    return m;
}
void  majority(int arr[],int n)
{
    int j=0;
    int m=max(arr,n);
    int hash[m+1];
    for(int i=0;i<=m;i++)
    {
        hash[i]=0;
    }
    for(int i=0;i<n;i++)
    {
      hash[arr[i]]++;  
    }
    for(int i=0;i<=m;i++)
    {
        if(hash[i]>n/2){
            arr[j++]=i;
        }
    }
    for(int i=0;i<j;i++){
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
    // int arr[]={7, 0, 0, 1, 7, 7, 2, 7, 7};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // // printf("%d",majority(arr,n));
    majority(arr,n);
    return 0;
}