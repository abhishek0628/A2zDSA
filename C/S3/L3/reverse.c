// problem
/*
Given an array of numbers, you need to return the count of reverse pairs.
 Reverse Pairs are those pairs where i<j and arr[i]>2*arr[j].

*/

//bruteforce solution
#include<stdio.h>
int reversecount(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>2*arr[j])
            {
                count++;
            }
        }
    }
    return count;
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
    printf("%d",reversecount(arr,n));
    return 0;
}