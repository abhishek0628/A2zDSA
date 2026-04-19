/*
Heap Sort

Algorithm:
1. Build a max heap from the array.
2. The maximum element will be at index 0.
3. Swap arr[0] with the last element.
4. Reduce heap size by 1 (ignore the last sorted element).
5. Heapify the root again.
6. Repeat until the array is sorted.

Time Complexity:
Worst Case: O(n log n)
Average Case: O(n log n)
Best Case: O(n log n)   // no special best case like bubble sort

Space Complexity:
O(1)   // in-place (no extra memory)

Properties:
- In-place sorting
- Not stable
*/
#include<stdio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
void maxheapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(i!=largest){
        swap(&arr[i],&arr[largest]);
        maxheapify(arr,n,largest);
    }
}
void heapsort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        maxheapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(&arr[0],&arr[i]);
        maxheapify(arr,i,0);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    printf("Enter size of array: ");
    int arr[n];
    printf("Enter element of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    heapsort(arr,n);
    return 0;
}