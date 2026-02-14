//problem statement
/*Given an integer array nums, find the subarray with the largest sum and return the 
sum of the elements present in that subarray.

A subarray is a contiguous non-empty sequence of elements within an array.*/
#include<stdio.h>
#include<limits.h>
int maxsubarray(int arr[],int n){
    int left=0;
    int sum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxsum){
            maxsum=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxsum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",maxsubarray(arr,n));
    return 0;
}