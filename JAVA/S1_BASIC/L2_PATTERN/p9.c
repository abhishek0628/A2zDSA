#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int mid=n;
        for(int j=1;j<=2*(n-1)+1;j++)
        {
            if(j>=mid-i&&j<=mid+i)
            printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    for(int i=n-1;i>=0;i--)
    {
        int mid=n;
        for(int j=1;j<=2*(n-1)+1;j++)
        {
            if(j>=mid-i&&j<=mid+i)
            printf("*");
            else printf(" ");
        }
        
        printf("\n");
    }
}