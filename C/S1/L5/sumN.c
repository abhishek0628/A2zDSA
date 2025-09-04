#include<stdio.h>
void sumN(int n,int *sum)
{
    if(n==0)return;
   *sum=*sum+n;
   sumN(n-1,sum);
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    sumN(n,&sum);
    printf("%d",sum);
    return 0;
}