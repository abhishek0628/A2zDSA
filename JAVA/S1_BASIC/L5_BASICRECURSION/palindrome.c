#include<stdio.h>
#include<string.h>
int ispalindrome(char str[],int start,int end)
{
    // if(n==0||n==1)return 1;
    if(start>=end)return 1;
    if(str[start]!=str[end])return 0; 
    return ispalindrome(str,start+1,end-1);
    
}
int main()
{
    
    char str[100];
    scanf("%s",str);
    int n=strlen(str);
    int r=ispalindrome(str,0,n-1);
    if(r==0)printf("no");
    else printf("yes");
    return 0;
}