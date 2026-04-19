/*
Problem: Find all leader elements in an array

Definition:
An element is a leader if it is greater than all elements to its right.

Algorithm (Brute Force):
1. For each element arr[i]:
      a. Assume it is a leader (flag = 1)
      b. Compare it with all elements to its right (j = i+1 to n-1)
      c. If any arr[j] > arr[i], then it is not a leader (flag = 0)
2. If flag remains 1, print arr[i]
3. After loop ends, print last element (always a leader)

Time Complexity:
O(n^2)
- For each element, we check all elements to the right

Space Complexity:
O(1)
- No extra space used

Note:
- Brute force approach
- Can be optimized to O(n) using reverse traversal
*/
#include<stdio.h>
void leader(int arr[],int n)
{
    int flag=1;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            printf("%d ",arr[i]);
        }
        if(flag==0)
        {
            flag=1;
        }
    }
    printf("%d",arr[n-1]);
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
    leader(arr,n);
    return 0;
}