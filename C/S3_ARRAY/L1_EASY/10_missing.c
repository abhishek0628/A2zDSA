/*
Problem: Find the missing number in an array containing numbers from 1 to n

Algorithm:
1. Read array of size n (assumes numbers are from 1 to n with one missing)
2. Compute expected sum of first n natural numbers using formula:
       sum1 = n*(n+1)/2
3. Compute actual sum of array elements:
       sum2 = sum of all elements in array
4. Missing number = sum1 - sum2
5. Return missing number

Time Complexity:
O(n)
- One traversal of array

Space Complexity:
O(1)
- Only variables used, no extra data structures

Note:
- Assumes exactly one number is missing
- Works only when array contains numbers in range [1, n]
*/
#include<stdio.h>

int missing(int arr[],int n){
    int sum1=n*(n+1)/2;
    int sum2=0;
    for(int i=0;i<n;i++){
        sum2+=arr[i];
    }
    return sum1-sum2;
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
    int r=missing(arr,n);
    printf("%d",r);
    return 0;
}