//Problem Statement: Implement the power function pow(x, n) , which calculates the x raised to n i.e. xn.
#include<stdio.h>
int Pow(int x,int n){
    if(n==0)return 1;
    return Pow(x,n-1)*x;
}
int main(){
    int x;
    scanf("%d",&x);
    int n;
    scanf("%d",&n);
    printf("%d",Pow(x,n));
    return 0;
}