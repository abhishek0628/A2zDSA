/*
Selection Sort

Algorithm:
In each pass, find the minimum element from the unsorted part
and swap it with the first element of that part.

Time Complexity:
Worst Case: O(n^2)
Average Case: O(n^2)
Best Case: O(n^2)   // no optimization, always scans the remaining array

Space Complexity:
O(1)   // no extra space used

Properties:
- In-place sorting
- Not stable   // swapping can change relative order of equal elements
*/
#include<stdio.h>
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int t=arr[min];
            arr[min]=arr[i];
            arr[i]=t;
        }
    }
}
int main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter element of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}