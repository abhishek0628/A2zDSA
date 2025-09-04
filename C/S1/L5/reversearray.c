#include<stdio.h>
#include<stdlib.h>
void reverse(int *arr,int start,int end)
{

    if(start>=end)return;
    int t=arr[end];
    arr[end]=arr[start];
    arr[start]=t;
    reverse(arr,start+1,end-1);

}
int main()
{
    int n;
    scanf("%d",&n);
    int *arr=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}