// #include<stdio.h>
// int main(){
//     int n=10;
//     int *p=&n;
//     print("%d\n",n);
//     printf("%p\n",p);
//     printf("%d",*p);
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int p=10;
    int *ptr=&p;//address of p
    cout<<ptr;
    return 0;
}