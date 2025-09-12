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
        
        else if(arr[mid]>target)
        {
            r=mid-1;
        }
        else l=mid+1;
    }
    return ans;

}


int firstindex(int arr[], int l, int r, int target)
{
    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == target)
        {
            ans = mid;     // store index
            r = mid - 1;   // move left to find earlier occurrence
        }
        else if (arr[mid] > target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

int occurence(int arr[],int l,int r,int target)
{
    int first=firstindex(arr,l,r,target);
    int last=lastindex(arr,l,r,target);
    return last-first+1;
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
    printf("%d",occurence(arr,0,n-1,target));
    return 0;
}