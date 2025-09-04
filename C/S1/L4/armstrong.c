#include<stdio.h>
#include<math.h>
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
int isarmstrong(int num)
{

    int n=num;
    int c=count(num);
    int arm=0;
    while(num>0)
    {
        int r=num%10;
        arm=arm+pow(r,c);
        num/=10;
        

    }
    return n==arm;
}
int main()
{
    int num;
    scanf("%d",&num);
    int res=isarmstrong(num);
    if(res==1)printf("yes");
    else printf("no");
    return 0;
}