// problem statement
/*Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. 
The sorting must be done in-place, without making a copy of the original array.*/
#include<stdio.h>
int compare(const void *a,const void *b){
    return(*(int*)a-*(int*)b);
}
void sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 &&key<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
    // sort(arr,n);
    qsort(arr,n,sizeof(int),compare);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}