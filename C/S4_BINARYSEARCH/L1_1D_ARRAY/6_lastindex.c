#include<stdio.h>
int lastindex(int arr[],int l,int r,int target)
{
    int ans=-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            l=mid+1;
        }
        if(arr[mid]>target)
        {
            r=mid-1;
        }
        else l=mid+1;
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
    int target;
    scanf("%d",&target);
    printf("%d",lastindex(arr,0,n-1,target));
    return 0;
}