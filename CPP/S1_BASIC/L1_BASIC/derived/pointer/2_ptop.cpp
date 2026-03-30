#include<iostream>
using namespace std;
int main(){
    int p=10;
    int *ptr=&p;
    int **pptr=&ptr;
    cout<<ptr<<endl;
    cout<<pptr;
    return 0;
}