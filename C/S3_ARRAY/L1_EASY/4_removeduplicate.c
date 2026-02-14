//problem statement
/*Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. 
The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. 
It does not matter what you leave beyond the first k elements.*/
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

void removed(int arr[],int n)
{
    int j=0;
    int *res=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        if(search(res,j,arr[i])==0)
        {
            res[j++]=arr[i];
        }
    }
    for(int i=0;i<j;i++)
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
    removed(arr,n);
    return 0;
    
}