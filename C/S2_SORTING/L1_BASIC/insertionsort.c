/*
Insertion Sort

Algorithm:
Pick each element and insert it into its correct position in the already sorted part.
Assume the first element is already sorted.

Time Complexity:
Worst Case: O(n^2)
Average Case: O(n^2)
Best Case: O(n)   // when the array is already sorted

Space Complexity:
O(1)   // in-place, no extra space used

Properties:
- In-place sorting
- Stable sorting
*/
#include<stdio.h>
void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 &&key<arr[j])//if array is already sorted ,this loop will never execute and best case happens
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
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter element of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}