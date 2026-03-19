#include<stdio.h>
int main(){
    // 2 bytes of data value
    //signed range(-32,768 to 32,767)
    //unsigned range(0 to 65,535)

    //declaration
    short int a;//declaration
    short b;//shortcut notaion
    unsigned short c;//can take only positive values

    //input
    scanf("%hd",&a);
    scanf("%hu",&c);

    //print
    printf("%hd",a);
    printf("%hu",c);
    return 0;
}