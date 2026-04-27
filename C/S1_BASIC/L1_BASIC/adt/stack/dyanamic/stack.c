//using linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct stack{
    struct node *top;

};
struct stack *createstack(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->top=NULL;
    return s;
}
int main(){

}
