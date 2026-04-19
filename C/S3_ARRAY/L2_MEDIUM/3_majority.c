/*
Problem: Find Majority Element(s) in an array

Definition:
An element is a majority element if it appears more than n/2 times.

Algorithm:
1. Find the maximum element in the array (m)
2. Create a hash array of size (m + 1) and initialize all values to 0
3. Traverse the input array:
      - Increment hash[arr[i]] for each element
4. Traverse the hash array:
      - If hash[i] > n/2, then i is a majority element
5. Store and print all such elements

Time Complexity:
O(n + m)
- O(n) for counting frequencies
- O(m) for scanning hash array

Space Complexity:
O(m)
- Extra hash array of size (max element value)

Note:
- Works only for non-negative integers
- Not efficient for large max values or sparse arrays
- Not suitable when values are negative
*/
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