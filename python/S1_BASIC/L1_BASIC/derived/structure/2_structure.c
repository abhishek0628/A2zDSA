#include<stdio.h>
// #pragma pack(1)
struct test{
    int a;
    char b;
    char c;
    // int d;
};
int main(){
    printf("%lu",sizeof(struct test));
    return 0;
}