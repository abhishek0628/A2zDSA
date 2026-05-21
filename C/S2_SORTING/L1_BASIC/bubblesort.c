/*
Bubble Sort

Algorithm:
Compare adjacent elements and swap them if the first is greater than the second.
After each pass, the largest element moves to the end of the array.

Time Complexity:
Worst Case: O(n^2)
Average Case: O(n^2)
Best Case: O(n)   // when the array is already sorted (with optimization)

Space Complexity:
O(1)   // no extra space used

Properties:
- In-place sorting  // works within the original array
- Stable sorting    // maintains relative order of equal elements
*/

#include<stdio.h>
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int swapped=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;
                swapped=1;
            }
            // if(swapped==0)break;//means array is already sorted so need to check again
        }
        if(swapped==0)break;
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
    bubblesort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}