//using structure
#include<stdio.h>
#include<stdlib.h>
struct stack{
    int capacity;
    int top;
    int *arr;
};
struct stack *createStack(int capacity){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->capacity=capacity;
    s->top=-1;
    s->arr=(int*)malloc(sizeof(int)*capacity);
    return s;

}
int isFull(struct stack *s){
    return s->top==s->capacity-1;
}
int isEmpty(struct stack *s){
    return s->top==-1;
}
void push(struct stack *s,int data){
    if(isFull(s)){
        printf("stack is full ,can not push the element");
        return;
    }
    s->arr[++(s->top)]=data;
}
int pop(struct stack *s){
    if(isEmpty(s)){
        printf("stack is empty ,can not remove element");
        return -1;
    }
    return s->arr[(s->top)--];
}
void display(struct stack *s){
    if(isEmpty(s)){
        printf("stack is empty ,can not display element\n");
        return;
    }
    for(int i=0;i<=s->top;i++){
        printf("%d ",s->arr[i]);
    }
}
int main(){
    struct stcak *s=createStack(10);
    push(s,56);
    push(s,89);
    display(s);
    return 0;

}