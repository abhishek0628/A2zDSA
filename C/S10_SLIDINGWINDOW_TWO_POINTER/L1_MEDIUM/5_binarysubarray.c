#include<stdio.h>
#include<stdlib.h>
int max(int *arr,int n,int goal)
{
    int sum=0;
    int count=0;
    int *frequency=(int *)calloc(n+1,sizeof(int));
    frequency[0]=1;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum-goal>=0)
        {
            count=count+frequency[sum-goal];
        }
        frequency[sum]++;
    }
    return count;

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
    int goal;
    scanf("%d",&goal);
    printf("%d",max(arr,n,goal));
    return 0;

}