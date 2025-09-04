#include<stdio.h>
int reverse(int num)
{
    int n=num;
    if(num<0)num=(-num);
    int reverse=0;
    while(num>0)
    {
        reverse=(reverse*10)+num%10;
        num/=10;
        

    }
    if(n<0)return -reverse;
    return reverse;
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",reverse(num));
    return 0;
}