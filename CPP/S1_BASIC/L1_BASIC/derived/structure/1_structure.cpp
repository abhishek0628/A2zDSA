
#include<iostream>

using namespace std;
struct student{
    char name[25];
    int roll;
    int marks;
};
struct student *create(const char *name,int roll,int marks){
    struct student *s=new student;
    strcpy(s->name,name);
    s->roll=roll;
    s->marks=marks;
    return s;
}
int main(){
    struct student *s;
    s=create("alex",3,34);
    cout<<s->roll;
    return 0;
}