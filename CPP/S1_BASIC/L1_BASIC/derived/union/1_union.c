#include<stdio.h>
#pragma pack(1)

union Data{
    char s[50];
    float f;
    char c;
};
int main(){
    printf("%lu",sizeof(union Data));
    return 0;
}