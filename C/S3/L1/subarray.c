#include<stdio.h>
void subarray(int arr[],int n,int k)
{
    int count=0;
    int max=0;
    int sum=0;
    int j=0;
    int s=-1;
    // int e=-1;
    for(int i=0;i<n;i++)
    {
        // s++;
        sum=sum+arr[i];
        if(sum<=k)
        {
            if(count>max)
            {
                max=count;
                s=i;
                j++;
            }
            i=j;

        }
        count++;

    }
    for(int i=s;i<=s+max;i++)
    {
        printf("%d ",arr[i]);
    }

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