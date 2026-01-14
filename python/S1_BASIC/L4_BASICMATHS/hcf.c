#include<stdio.h>

int hcf(int a,int b)
{
    int min=a<b?a:b;
    for(int i=min;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
        {
            return i;
        }
    }
    return 1;

}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",hcf(a,b));
    return 0;
}