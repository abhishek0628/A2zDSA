/*
The lower bound algorithm finds the first or the smallest index in a sorted array where the value at that 
index is greater than or equal to a given key i.e. x.
*/
#include<stdio.h>
int max(int arr[],int n)
{
    int m=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>m)m=arr[i];
    }
    return m;
}
int lowerbound(int arr[],int n,int target)
{
    int m=max(arr,n);
    if(target>m)return -1;
    
   int low = 0, high = n;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= target)
            high = mid;  
        else
            low = mid + 1; 
    }
    return low; 
}
int lowerbound2(int arr[],int n,int target){
    int m=max(arr,n);
    if(target>m)return -1;
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
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
    int x;
    scanf("%d",&x);
    printf("%d",lowerbound(arr,n,x));
    return 0;
}