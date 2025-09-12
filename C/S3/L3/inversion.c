//problem
/*
What is an inversion of an array? Definition: for all i & j < size of array,
 if i < j then you have to find pair (A[i],A[j]) such that A[j] < A[i].
*/

//brute force solution
#include<stdio.h>
int countinversion(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])count++;
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
    printf("%d",countinversion(arr,n));
    return 0;
}
//optimal solution using merge sort
// int count(int arr[],int l,int m,int r)
// {
//     int 
// }