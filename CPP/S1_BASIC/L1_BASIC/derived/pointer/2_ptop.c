#include<stdio.h>
int main(){
    int n=10;
    int *ptr=&n;
    int **pptr=&ptr;
    printf("%p\n",ptr);
    printf("%p\n",*pptr);
    printf("%p",pptr);
    return 0;
}