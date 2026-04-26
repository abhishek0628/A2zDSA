//using structure
#include<stdio.h>
#include<stdlib.h>
struct queue{
    int capacity;
    int rear;
    int front;
    int *arr;
};
struct queue* createQueue(int capacity){
    struct queue* q=(struct queue*)malloc(sizeof(struct queue));
    q->capacity=capacity;
    q->rear=0;
    q->front=0;
    q->arr=(int*)malloc(sizeof(int)*capacity);
    return 0;

}
int isFull(struct queue*q){
    return q->rear==q->capacity;
}
int isEmpty(struct queue *q){
    return q->front==q->rear;
}
void push(struct queue *q,int data){
    if(isFull(q)){
        printf("queue is full,can not insert data\n");
        return ;
    }
    q->arr[(q->rear)++]=data;
}
int pop(struct queue*q){
    if(isEmpty(q)){
        printf("queue is empty, can not remove element\n");
        return -1;
    }
    return q->arr[(q->front)++];
}
void display(struct queue *q){
    if(isEmpty(q)){
        printf("queue is empty,can not display element\n");
        return;
    }
    for(int i=q->front;i<=q->rear;i++){
        printf("%d ",q->arr[i]);
    }
}
int main(){
    struct queue *q=createQueue(5);
    push(q,56);
    display(q);
    return 0;

}