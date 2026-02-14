//problem statement
/*Problem Statement: You are given an array of prices where prices[i] is the price of a given stock on an ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. 
If you cannot achieve any profit, return 0.*/
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