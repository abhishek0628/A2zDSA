#include<stdio.h>//header
#include<stdlib.h>
#include<string.h>
#define num 10 //macro definition
#define exp (a+b)

//function
int add(int a,int b){
    return a+b;
}
//main drive
int main(){
    printf("%d",add(3,4));
    return 0;
}