#include<stdio.h>
int max(int arr[],int n)
{
    int m=arr[0];
    for(int i=0;i<n;i++)
    {
        
        for(int j=i;j<n;j++)
        {
            int p=1;
            for(int k=i;k<=j;k++)
            {
                p=p*arr[k];
            }
            if(p>m){
                m=p;

            }

        }
    }
    return m;
}
//optimal solution
int maxProductSubarray(int* arr, int n) {
    int currMax = arr[0], currMin = arr[0], ans = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < 0) {
            int temp = currMax;
            currMax = currMin;
            currMin = temp;
        }
        currMax = (arr[i] > arr[i] * currMax) ? arr[i] : arr[i] * currMax;
        currMin = (arr[i] < arr[i] * currMin) ? arr[i] : arr[i] * currMin;
        if (currMax > ans) ans = currMax;
    }
    return ans;
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
    printf("%d\n",max(arr,n));
    printf("%d",maxProductSubarray(arr,n));
    return 0;
}


