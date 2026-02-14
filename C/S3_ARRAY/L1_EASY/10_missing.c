//problem statement
/*Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), 
return the only number missing from the array within this range.*/
#include<stdio.h>

int missing(int arr[],int n){
    int sum1=n*(n+1)/2;
    int sum2=0;
    for(int i=0;i<n;i++){
        sum2+=arr[i];
    }
    return sum1-sum2;
}
int main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter element of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int r=missing(arr,n);
    printf("%d",r);
    return 0;
}