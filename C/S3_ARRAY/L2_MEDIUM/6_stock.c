/*
Problem: Maximum Profit from Stock Buy and Sell (one transaction)

Algorithm:
1. Initialize minPrice = arr[0]
2. Initialize maxProfit = 0
3. Traverse array from i = 1 to n-1:
      a. If arr[i] < minPrice:
            update minPrice = arr[i]
      b. Else:
            compute profit = arr[i] - minPrice
            update maxProfit if profit is greater
4. Return maxProfit

Time Complexity:
O(n)   // single traversal of array

Space Complexity:
O(1)   // constant extra space used
*/
#include<stdio.h>

int maxprofit(int arr[], int n) {
    if (n <= 1) return 0;

    int minPrice = arr[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < minPrice) {
            minPrice = arr[i];
        } else {
            int profit = arr[i] - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
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
    printf("%d",maxprofit(arr,n));
    return 0;
}