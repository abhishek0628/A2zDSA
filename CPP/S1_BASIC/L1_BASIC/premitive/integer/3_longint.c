#include<stdio.h>
int main(){
    //8 bytes
    //signed range(-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807)
    //unsigned range(0 to 18,446,744,073,709,551,615)

    //declaration
    long int a;
    signed long int b;
    unsigned long int c;

    //input 
    scanf("%ld",&a);
    scanf("%ld",&b);
    scanf("%lu",&c);

    //print
    printf("%ld",a);
    printf("%ld",b);
    printf("%lu",c);
    return 0;

}