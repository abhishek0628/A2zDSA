#include<stdio.h>
int maxx(int arr[],int n)
{
    int max=0;
    int count=0;

    int j=1;
    for(int i=0;i<n;i++)
    {
        
        if(arr[i]==1 &&i!=n-1)
        {
            count++;
            if(arr[j]==0)
            {
                if(count>max)
                {
                    max=count;
                    count=0;
                }
            }
        }
        else if(arr[i]==1 &&i==n-1)
        {
            count++;
            if(max<count)max=count;
        }
        j++;
       
    }
    return max;
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
    printf("%d",maxx(arr,n));
    return 0;
}