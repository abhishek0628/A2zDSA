#include<stdio.h>
void twosum(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                printf("%d %d",i,j);
                return ;
            }
        }
    }
    printf("-1 -1");
}
// void twosum(int arr[],int n,int k){
//     int left=0;
//     int sum=0;
//     for(int right=0;right<n;right++){
//         sum+=arr[right];
        
//     }
// }
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
    twosum(arr,n,k);
    return 0;
}