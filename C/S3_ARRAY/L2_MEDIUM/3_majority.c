//problem statement
/*Problem Statement: Given an integer array nums of size n, return the majority element of the array.

The majority element of an array is an element that appears more than n/2 times in the array. 
The array is guaranteed to have a majority element.*/
#include<stdio.h>
#include<limits.h>
int majority(int arr[],int n)
{
    int hash[100000];
    for(int i=0;i<100000;i++)
    {
        hash[i]=0;
    }
    for(int i=0;i<n;i++)
    {
      hash[arr[i]]++;  
    }
    for(int i=0;i<100000;i++)
    {
        if(hash[i]>n/2)return i;
    }
    return -1;
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
    printf("%d",majority(arr,n));
    return 0;
}