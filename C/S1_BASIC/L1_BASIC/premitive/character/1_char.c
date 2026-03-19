#include<stdio.h>
#include<ctype.h>
int main(){
    // 1 bytes data
    //range(any character)

    // isalpha(ch) → checks if it’s a letter
    // isdigit(ch) → checks if it’s a digit
    // islower(ch) / isupper(ch) → checks case
    // tolower(ch) / toupper(ch) → convert case

    //declaration
    char ch;

    //input
    scanf("%c",&ch);

    //print
    printf("%c",ch);
    return 0;
}