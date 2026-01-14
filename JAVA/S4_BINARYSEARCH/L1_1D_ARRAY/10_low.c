#include<stdio.h>
int lowindex(int arr[], int n)
{
    int l = 0;
    int r = n - 1;

    while (l < r)
    {
        int mid = l + (r - l) / 2;

        // If mid element is greater than next, min lies in right half
        if (arr[mid] > arr[mid + 1])
            l = mid + 1;
        else
            r = mid; // otherwise, min lies in left half (including mid)
    }
    return l; // or r (both are same here)
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
    printf("%d",lowindex(arr,n));
    return 0;
}