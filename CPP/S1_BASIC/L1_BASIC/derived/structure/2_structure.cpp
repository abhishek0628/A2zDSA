// #include<stdio.h>
// // #pragma pack(1)
// struct test{
//     int a;
//     char b;
//     char c;
//     // int d;
// };
// int main(){
//     printf("%lu",sizeof(struct test));
//     return 0;
// }
#include<iostream>
using namespace std;
struct test{
    int a;
    char b;
    char c;
};
int main(){
    cout<<sizeof(struct test);
    return 0;
}