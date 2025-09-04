#include<stdio.h>
void print(int n)
{
    if(n==0)return;
    printf("hello\n");
    print(n-1);
}
int main()
{
    print(6);
    return 0;
}