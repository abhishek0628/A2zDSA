/*
Problem: Search an element in an array

Algorithm:
1. Start from index 0
2. Traverse the array from left to right
3. For each element:
      if arr[i] == target
            return i
4. If element is not found, return -1

Time Complexity:
O(n)   // worst case we check every element

Space Complexity:
O(1)   // no extra space used
*/
#include<stdio.h>
int search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])return i;
    }
    return -1;
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
    int key;
    scanf("%d",&key);
    int r=search(arr,n,key);
    if(r==-1)printf("not found");
    else printf("%d",r);
    return 0;
}