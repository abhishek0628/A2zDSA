#include<stdio.h>
int search(int arr[],int l,int r,int key)
{
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==key)return mid;
        if(arr[mid]>key)
        {
            r=mid-1;
        }
        else l=mid+1;
    }
    return -1;
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
    int key;
    scanf("%d",&key);
    int r=search(arr,0,n-1,key);
    if(r==-1)printf("not found");
    else printf("%d",r);
    return 0;

}