/*
Function 1: compare (used for qsort)

Purpose:
- Compares two integers for sorting in ascending order

Algorithm:
1. Cast void pointers to int pointers
2. Dereference both pointers
3. Return difference (a - b)

Time Complexity:
O(1)  // constant time comparison

Space Complexity:
O(1)  // no extra space used
*/


/*
Function 2: sort (Insertion Sort)

Algorithm:
1. Start from index 1 to n-1
2. Pick current element as key
3. Compare key with elements on the left
4. Shift larger elements one position right
5. Insert key at correct position
6. Repeat for all elements

Time Complexity:
Worst Case: O(n^2)
Average Case: O(n^2)
Best Case: O(n)   // already sorted array

Space Complexity:
O(1)   // in-place sorting

Properties:
- In-place sorting
- Stable sorting
*/
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