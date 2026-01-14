#include <stdio.h>
#include <stdlib.h>

struct stack {
    int top;
    int capacity;
    int *arr;
};

struct stack *createstack(int capacity) {
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->capacity = capacity;
    s->arr = (int *)malloc(sizeof(int) * capacity);
    return s;
}

int isEmpty(struct stack *s) {
    return s->top == -1;
}

void push(struct stack *s, int data) {
    if (s->top == s->capacity - 1) {
        printf("Stack Overflow\n");
        return;
    }
    s->arr[++s->top] = data;
}

int pop(struct stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->arr[s->top--];
}

struct queue {
    struct stack *s1;
    struct stack *s2;
};

struct queue *createqueue(int capacity) {
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->s1 = createstack(capacity);
    q->s2 = createstack(capacity);
    return q;
}

void enque(struct queue *q, int data) {
    push(q->s1, data);
}

int deque(struct queue *q) {
    if (isEmpty(q->s2)) {
        while (!isEmpty(q->s1)) {
            int temp = pop(q->s1);
            push(q->s2, temp);
        }
    }
    if (isEmpty(q->s2)) {
        printf("Queue is empty\n");
        return -1;
    }
    return pop(q->s2);
}

void display(struct queue *q) {
    // Move elements into s2 if needed
    if (isEmpty(q->s2)) {
        while (!isEmpty(q->s1)) {
            push(q->s2, pop(q->s1));
        }
    }
    // Print from s2 (top to bottom is queue order)
    for (int i = q->s2->top; i >= 0; i--) {
        printf("%d ", q->s2->arr[i]);
    }
    printf("\n");
}

int main() {
    struct queue *q = createqueue(10);

    enque(q, 78);
    enque(q, 56);
    enque(q, 34);

    printf("Queue: ");
    display(q);

    printf("Dequeued: %d\n", deque(q));
    printf("Queue after dequeue: ");
    display(q);

    return 0;
}
