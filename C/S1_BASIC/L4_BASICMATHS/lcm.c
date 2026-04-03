#include<stdio.h>
int hcf(int a,int b){
    int r=1;
    while(r!=0){
        r=a%b;
        b=a;
        a=r;
    }
    return b;
}
int lcm(int a,int b){
    return (a*b)/hcf(a,b);
}
int main(){
    printf("%d",lcm(20,15));
    return 0;
}