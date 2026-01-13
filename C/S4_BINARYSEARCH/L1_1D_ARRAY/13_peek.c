#include<stdio.h>
// int peek(int arr[],int n)
// {
//     int l=0;
//     int r=n-1;
//     while(l<r)
//     {
//         int mid=l+(r-l)/2;
//         if(mid==n-1)return mid;
//         if(mid==0)return mid;
//         if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])return mid;
//         if(arr[mid]<arr[mid+1])l=mid+1;
//         else r=mid-1;
//     }
//     return n-1;
// }
int peek(int arr[], int n)
{
    int l = 0;
    int r = n - 1;

    while (l < r)
    {
        int mid = l + (r - l) / 2;

        
        if (arr[mid] < arr[mid + 1])
            l = mid + 1;
        else
            r = mid; 
    }
    return l; 
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
    
    printf("%d",peek(arr,n));
    return 0;
}