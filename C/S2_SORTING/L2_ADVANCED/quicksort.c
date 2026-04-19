/*
Quick Sort

Algorithm:
Select a pivot element.
Partition the array such that:
- Elements smaller than pivot go to the left
- Elements greater than pivot go to the right
Recursively apply the same process to left and right subarrays.

Time Complexity:
Worst Case: O(n^2)     // when pivot is always smallest/largest (bad choice)
Average Case: O(n log n)
Best Case: O(n log n)

Space Complexity:
O(log n)   // due to recursion stack (in-place apart from this)

Properties:
- In-place sorting (with small recursion stack)
- Not stable
*/
#include<stdio.h>
int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<=pivot){
            i++;
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    int t=arr[i+1];
    arr[i+1]=arr[r];
    arr[r]=arr[i+1];
    return i+1;
}
void quicksort(int arr[],int l,int r){
    if(l<r){
        int p=partition(arr,l,r);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,r);
    }
}

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}