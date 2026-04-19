/*
Problem: Find the maximum length subarray with sum equal to k

Algorithm (Sliding Window):
1. Initialize left pointer = 0
2. Initialize sum = 0, maxlen = 0
3. Traverse array using right pointer from 0 to n-1:
      a. Add arr[right] to sum
      b. While sum > k and left <= right:
            - subtract arr[left] from sum
            - move left forward
      c. If sum == k:
            - compute current window length = right - left + 1
            - update maxlen if current length is larger
4. Return maxlen

Time Complexity:
O(n)
- Each element is added and removed at most once

Space Complexity:
O(1)
- Only a few variables used (no extra data structure)
*/
#include<stdio.h>
int subarray(int arr[],int n,int k){
    int left=0;
    int maxlen=0;
    int len=0;
    int sum=0;
    for(int right=0;right<n;right++){
        sum+=arr[right];
        while(sum>k&& left<right){
            sum-=arr[left];
            left++;
        }
        
        if(sum==k){
            len=right-left+1;
            if(len>maxlen)maxlen=len;
        }
    }
    return maxlen;
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
    subarray(arr,n,k);
    return 0;
}