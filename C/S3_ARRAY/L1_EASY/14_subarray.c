
/*
Problem: Find the longest subarray with sum equal to a given key

Algorithm (Sliding Window):
1. Initialize two pointers:
      left = 0, right = 0
2. Maintain:
      sum = 0 (current window sum)
      maxlen = -1 (stores maximum length found)
      start, end (to store indices of best subarray)

3. For each right from 0 to n-1:
      a. Add arr[right] to sum
      b. While sum > key and left <= right:
            - subtract arr[left] from sum
            - increment left
      c. If sum == key:
            - compute current window length = right - left + 1
            - update maxlen if this length is larger
            - update start and end indices

4. Print start and end indices of longest valid subarray
5. Return maxlen

Time Complexity:
O(n)
- Each element is added and removed at most once

Space Complexity:
O(1)
- Only a few variables used

Note:
- Works only for non-negative integers
- If array contains negative numbers, sliding window approach fails
*/
#include<stdio.h>
#include<stdlib.h>
int longest(int arr[],int n,int key){
    int len=0;
    int maxlen=-1;
    int sum=0;
    int left=0;
    int end=-1;
    int start=0;
    for(int right=0;right<n;right++){
        sum+=arr[right];
        
        while(sum>key &&left<right){
            sum-=arr[left];
            
            left++;
        }
        if(sum==key){
            len=right-left+1;
            if(len>maxlen){
                maxlen=len;
                start=left;
                end=right;
            }
        }
    }
    printf("%d %d\n",start,end);
    return maxlen;
}
int main(){
    int arr[]={10,5,2,7,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    // printf("\n");
    printf("%d",longest(arr,n,15));
    return 0;
}