#include<stdio.h>
#include<stdlib.h>
int search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)return 1;
    }
    return 0;
}
void movv(int arr[],int n)
{
    int *res=(int*)malloc(sizeof(int)*n);
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            res[j++]=arr[i];
        }
    
    }
    for(int k=j+1;k<n;k++)
    {
        res[k]=0;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",res[i]);
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
    movv(arr,n);
    return 0;
}
