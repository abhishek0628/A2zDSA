/*
Problem: Two Sum (Find indices of two numbers such that their sum equals target)

Algorithm:
1. Take array arr of size n and target value
2. Traverse array using first loop (i = 0 to n-1)
3. For each i, traverse remaining elements using second loop (j = i+1 to n-1)
4. Check if arr[i] + arr[j] == target:
      - If yes, print indices i and j
      - Return immediately (pair found)
5. If no such pair exists, print -1 -1

Time Complexity:
O(n^2)
- Two nested loops over array elements

Space Complexity:
O(1)
- No extra space used

Note:
- Brute force approach
- Stops after finding first valid pair
*/
#include<stdio.h>
void twosum(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                printf("%d %d",i,j);
                return ;
            }
        }
    }
    printf("-1 -1");
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
    int k;
    scanf("%d",&k);
    twosum(arr,n,k);
    return 0;
}