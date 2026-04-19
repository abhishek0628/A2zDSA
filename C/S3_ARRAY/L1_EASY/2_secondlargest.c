/*
Problem: Find second smallest and second largest element in an array

Algorithm:
1. Start
2. If array size < 2, print -1 for both and return
3. Initialize:
      smallest = INT_MAX
      secondSmallest = INT_MAX
      largest = INT_MIN
      secondLargest = INT_MIN
4. Traverse the array:
      For each element x:
          if x < smallest:
                secondSmallest = smallest
                smallest = x
          else if x > smallest and x < secondSmallest:
                secondSmallest = x

          if x > largest:
                secondLargest = largest
                largest = x
          else if x < largest and x > secondLargest:
                secondLargest = x

5. If secondSmallest is still INT_MAX → set it to -1
6. If secondLargest is still INT_MIN → set it to -1
7. Print both values
8. End

Time Complexity:
O(n)   // single traversal

Space Complexity:
O(1)   // constant extra variables only
*/
#include<stdio.h>
#include<limits.h>
int max(int arr[],int n)
{
    int m=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
        }
        
    }
    return m;
}
int secondlargest(int arr[],int n)
{
    if(n<2)return -1;
    int m=max(arr,n);
    int s=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>s && arr[i]<m)
        {
            s=arr[i];
        }
    }
    return s;
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
    printf("%d",secondlargest(arr,n));
    return 0;
}