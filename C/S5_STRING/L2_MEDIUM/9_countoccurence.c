#include<stdio.h>
#include<string.h>
int count_occurence(const char *text,const char *pattern){
    int count=0;
    int m=strlen(pattern);
    for(int i=0;i<=strlen(text)-m;i++){
        if(strncmp(&text[i],pattern,m)==0){
            count++;
        }
    }
    return count;
}
int main(){
    int count=count_occurence("aaaahhssaaaraa","aa");
    printf("%d",count);
    return 0;
}