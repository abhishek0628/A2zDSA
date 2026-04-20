#include<stdio.h>
#include<string.h>
void count(char str[]){
    int hash[256]={0};
    for(int i=0;str[i]!="\0";i++){
        hash[(unsigned char)(str[i])]++;
    }
}