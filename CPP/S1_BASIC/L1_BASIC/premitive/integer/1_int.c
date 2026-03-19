#include<stdio.h>
int main(){
    //4 bytes values
    //signed range(-2,147,483,648 to 2,147,483,647)
    //unsigned range(0 to 4,294,967,295)
    
    //declaration
    int a;
    unsigned int b;
    signed int c;

    // input
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%u",&c);
    
    //print
    printf("%d",a);
    printf("%d",b);
    printf("%u",c);
    return 0;
}