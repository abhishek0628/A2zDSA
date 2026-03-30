// #include<stdio.h>
// #pragma pack(1)

// union Data{
//     char s[50];
//     float f;
//     char c;
// };
// int main(){
//     printf("%lu",sizeof(union Data));
//     return 0;
// }
#include<iostream>
using namespace std;
union data{
    char s[20];
    float f;
    char c;
};
int main(){
    cout<<sizeof(union data);
    return 0;
}