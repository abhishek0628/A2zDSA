#include<stdio.h>
#include<stdlib.h>
void movzeroes(int arr[],int n)
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
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("element of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    movezeroes(arr,n);
    return 0;
}
