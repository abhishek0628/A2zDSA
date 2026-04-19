
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
#include<limits.h>
int maxsubarray(int arr[],int n){
    
    int sum=0;
    int maxsum=INT_MIN;
    int start=0;
    int temp=0;
    int end=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxsum){
            start=temp;
            maxsum=sum;
            end=i;
        }
        if(sum<0){
            temp=i+1;
            sum=0;
        }
    }
    printf("%d %d\n",start,end);
    return maxsum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",maxsubarray(arr,n));
    return 0;
}