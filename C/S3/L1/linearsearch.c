#include<stdio.h>
int search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])return i;
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
    int r=search(arr,n,key);
    if(r==-1)printf("not found");
    else printf("%d",r);
    return 0;
}