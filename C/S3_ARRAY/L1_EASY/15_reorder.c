/*
Problem: Reorder array so that even numbers come before odd numbers

Algorithm:
1. Traverse the array using bubble sort style nested loops
2. For each adjacent pair arr[j] and arr[j+1]:
      a. If arr[j] is odd and arr[j+1] is even:
            - Swap them
3. Repeat until no more swaps are needed
4. Result: all even elements appear before odd elements
   (relative order within groups is not guaranteed to be preserved in general bubble-style swaps)

Time Complexity:
O(n^2)
- Due to nested loops (bubble sort style passes)

Space Complexity:
O(1)
- In-place swapping, no extra array used

Note:
- In-place algorithm
- Not stable for general grouping (relative order may change within even/odd groups)
*/
#include<stdio.h>
#include<stdlib.h>
void reorder(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]%2==1 && arr[j+1]%2==0){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}
void reorder2(int arr[],int n){
    int *res=(int*)malloc(sizeof(int)*n);
    int j=0;
    for(int i=0;i<n;i++){
        
        if(arr[i]%2==0){
            res[j++]=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==1){
            res[j++]=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",res[i]);
    }
}
int main(){
    int arr[]={31,23,66,90,76,43};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    reorder2(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}