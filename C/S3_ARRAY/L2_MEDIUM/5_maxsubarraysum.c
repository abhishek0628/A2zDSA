//problem statement
/*Given an integer array nums, find the subarray with the largest sum and return the 
sum of the elements present in that subarray.

A subarray is a contiguous non-empty sequence of elements within an array.*/
#include<stdio.h>
#include<limits.h>

void maxsubarray(int arr[],int n){
    int left=0;
    int sum=0;
    int maxsum=INT_MIN;
    int start=-1;
    int end=-1;
    int temp=0;
    int count=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxsum){
            maxsum=sum;
            end=i;
            start=temp;
            count++;

        }
        if(sum<0){
            sum=0;
            temp=i+1;
        }
    }
    for(int i=start;i<=end;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    maxsubarray(arr,n);
    return 0;
}