#include<stdio.h>
#define size 2
int rear=0;
int front =0;
int arr[size];
int isFull(){
    return rear==size;
}
int isEmpty(){
    return front==rear;
}
void enqueue(int data){
    if(isFull()){
        printf("queue is full,can not insert data\n");
        return;
    }
    arr[rear++]=data;
}
int dequeue(){
    if(isEmpty()){
        printf("queue is empty,can not remove element\n");
        return -1;
    }
    return arr[front++];
}
void display(){
    if(isEmpty()){
        printf("queue is empty ,can not display element\n");
        return;
    }
    for(int i=front;i<rear;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    enqueue(67);
    enqueue(34);
    enqueue(342);
    dequeue();
    // dequeue();
    // dequeue();

    display();
    return 0;
}