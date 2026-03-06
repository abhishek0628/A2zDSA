#include<stdio.h>
#include<string.h>
int longest(char *str){
    int maxlen=0;
    int len=0;
    int left=0;
    int n=strlen(str);
    for(int right=0;right<n-1;right++){
        if(str[right+1]==str[right]){
        while(left<=right && str[left]!=str[right]){
            left++;
        }
    }
        len=right=left+1;
        if(len>maxlen){
            maxlen=len;
        }
    }
    return maxlen;
}
int main(){
    char str[100];
    scanf("%s",str);
    printf("%d",longest(str));
    return 0;
}