/*
Problem: Reduce array recursively using pairwise weighted sum

Function:
reducesum(arr, n)

Algorithm:
1. If n == 1, return arr[0]
2. If n <= 0, return 0

3. Split array into two halves:
      left half: arr[0 ... mid-1]
      right half: arr[mid ... n-1]
      where mid = (n + 1) / 2

4. Create a new array temp of size n

5. For i from 0 to n2-1:
      temp[i] = arr[i] * 2 + arr[mid + i] * 3

6. If n is odd:
      copy remaining middle element as is

7. Recursively call:
      reducesum(temp, new_size)

8. Return final result

Time Complexity:
O(n log n)
- Each level processes O(n)
- Recursion depth is O(log n)

Space Complexity:
O(n)
- Temporary array used at each recursion level
- Recursion stack: O(log n)
*/

#include<stdio.h>
int reducesum(int arr[],int n){
    if(n==1)return arr[0];
    if(n<=0)return 0;
    int mid=(n+1)/2;
    int n1=mid;
    int n2=n-mid;
    int *temp=(int*)malloc(sizeof(int)*n);
    int min=n1<n2?n1:n2;
    int i;
    for(i=0;i<n2;i++){
        temp[i]=arr[i]*2+arr[mid+i]*3;
    }
    if(n1>n2){
        temp[i]=arr[i];
    }
    // temp[min]=arr[min];
    int result =reducesum(temp,n1);
    return result;
   
}
int main(){
    // int arr[]={31,23,66,90,76,43};
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    // reorder2(arr,n);
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }
    printf("%d",reducesum(arr,n));
    return 0;
}