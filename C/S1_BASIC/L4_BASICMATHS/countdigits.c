#include<stdio.h>
int count(int num)
{
    if(num<0)num=(-num);
    int count=0;
    while(num>0)
    {
        num/=10;
        count++;

    }
    return count;
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",count(num));
    return 0;
}