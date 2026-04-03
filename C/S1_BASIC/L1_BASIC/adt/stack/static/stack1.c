//using array
#include<stdio.h>
#define size 2
int top=-1;//initialise top with -1
int arr[size];

//checking is stack is empty
int isEmpty(){
    return top==-1;
}

//checking is stack is full
int isFull(){
    return top==size-1;
}

//push element into stack
void push(int data){
    if(isFull()){
        printf("stack is full,can not push element\n");
        return ;
    }
    arr[++top]=data;
}
//remove from stack
int pop(){
    if(isEmpty()){
        printf("stack is empty,can not remove element\n");
        return -1;
    }
    return arr[top--];
}
//returns top element
int peek(){
    if(isEmpty())return -1;
    return arr[top];
}

//print elements
void display(){
    if(isEmpty()){
        printf("stack is empty,can not display element\n");
        return;
    }
    for(int i=0;i<=top;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    push(56);
    push(43);
    push(89);
    display();
    return 0;
}