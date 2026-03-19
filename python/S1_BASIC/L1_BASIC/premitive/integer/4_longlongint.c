#include<stdio.h>
int main(){
    //8 bytes data
    //signed range(-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807)
    //unsigned range(0 to 18,446,744,073,709,551,615)
    
    //declaration
    long long int a;
    signed long long int b;
    unsigned long long int c;

    //input
    scanf("%lld",&a);
    scanf("%lld",&b);
    scanf("%llu",&c);

    //print
    printf("%lld",a);
    printf("%lld",b);
    printf("%llu",c);
    return 0;
}