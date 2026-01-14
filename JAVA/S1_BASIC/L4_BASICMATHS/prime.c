#include<stdio.h>
void isprime(int num)
{
    if(num==1||num==2)
    {printf("yes");
        return;
    }
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            printf("no");
            return;
        }
    }
    printf("yes");
}
int main()
{
    int num;
    scanf("%d",&num);
    isprime(num);
    return 0;
    
}