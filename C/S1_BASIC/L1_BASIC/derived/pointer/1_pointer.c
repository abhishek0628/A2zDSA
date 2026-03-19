#include<stdio.h>
int main(){
    int n=10;
    int *p=&n;
    print("%d\n",n);
    printf("%p\n",p);
    printf("%d",*p);
    return 0;
}