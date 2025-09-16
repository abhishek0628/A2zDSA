#include<stdio.h>
void isPalindrome(int num)
{
    if(num<0)
    {
        printf("no");
        return;
    }
    int n=num;
    int reverse=0;
    while(num>0)
    {
        reverse=(reverse*10)+num%10;
        num/=10;
        

    }
    if(reverse==n)printf("yes");
    else printf("no");
}
int main()
{
    int num;
    scanf("%d",&num);
    isPalindrome(num);
    return 0;
}