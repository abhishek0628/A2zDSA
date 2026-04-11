#include<stdio.h>
int min(int arr[],int n)
{
    int m=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<m)m=arr[i];
    }
    return m;
}
int upperbound(int arr[],int n,int target)
{
    int m=min(arr,n);
    if(target<m)return -1;
    
   int low = 0, high = n;
    while (low <high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target)
            low = mid+1;  
        else
            high = mid ; 
    }
    return low; 
}
int upperbound2(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>key){
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
    printf("%d",upperbound(arr,n,x));
    return 0;
}