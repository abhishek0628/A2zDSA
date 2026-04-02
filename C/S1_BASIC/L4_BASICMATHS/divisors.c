#include<stdio.h>
void divisors(int num)
{
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        printf("%d ",i);
    }
    printf(" %d",num);
}
int main()
{
    int num;
    scanf("%d",&num);
    divisors(num);
    return 0;
}