#include<stdio.h>
#include<string.h>
int main(){
    //declaration
    char str[100];
    

    // input
    scanf("%s",str);//only takes without space strings
    scanf("%49[a-zA-Z]", str);  // reads only letters, stops at other chars
    gets(str);//takes input with space without bound
    fgets(str,sizeof(str),stdin);//takes input with space but does not ignore starting space
    scanf(" %[^\n]",str);//ignores starting spaces

    //print
    printf("%s",str);
    printf("%0.5s",str);//only print 5 charcter
    puts(str);
    fputs(str,stdout);
    return 0;



}

