#include<stdio.h>
int maxconsecutiveones(int arr[],int n)
{
    int m=0;
    int left=0;
    for(int right=0;right<n;right++)
    {
        if(arr[right]==0)
        {
            left=right+1;
        }
        int win=right-left+1;
        if(win>m)m=win;
    }
    return m;
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
    printf("%d",max(arr,n));
    return 0;

}