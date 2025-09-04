#include<stdio.h>
void divisors(int num)
{
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        printf("%d ",i);
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    divisors(num);
    return 0;
}