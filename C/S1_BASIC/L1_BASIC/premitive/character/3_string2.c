#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char *str=NULL;
    size_t len=0;
    getline(&str,&len,stdin);//dyananic input
    printf("%s",str);
    free(str);
    return 0;
}