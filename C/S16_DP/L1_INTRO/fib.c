#include<stdio.h>
#include<stdlib.h>
int fib(int n)
{
    if(n<=1)return n;
    return fib(n-1)+fib(n-2);
}
long long int fib2(int n)
{
    if(n<=1)return n;
    long long int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%lld",fib2(n));
    printf("\n%d",fib(n));
    return 0;
}