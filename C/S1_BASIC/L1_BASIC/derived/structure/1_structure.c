#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    char name[52];
    int roll_no;
    int marks;
};
// struct student *create(char name[],int roll_no,int marks){
//     struct student *s=(struct student*)malloc(sizeof(struct student));
//     s->name=(char *)malloc(sizeof(char)*50);
//     s->name=name;
//     s->roll_no=roll_no;
//     s->marks=marks;
//     return s;

// }
int main(){
    // struct student *s=create("abhishek kumar",3,45);
    
    // printf("%s",s->name);
    struct student s;
    // char name[50];
    // fgets(name,50,stdin);
    // strcpy(s.name,name);
    // printf("%s",s.name);
    printf("%lu",sizeof(struct student));
    return 0;
}