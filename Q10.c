#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct queue
{
    int front, rear;
    int *arr;
    int size;
};

void init(struct queue *temp, int size)
{
    temp->size = size;
    temp->front = temp->rear = -1;
    temp->arr = (int *)malloc((size * sizeof(int)));
    printf("Queue initialized succesfully\n");
}

bool isEmpty(struct queue *temp)
{
    return temp->front == -1;
}

bool isFull(struct queue *temp)
{
    return (temp->rear+1)%temp->size == temp->front;
}

void push(struct queue *temp, int x)
{
    if (!isFull(temp))
    {
        if (isEmpty(temp))
        {
            temp->front = temp->rear = 0;
            temp->arr[temp->rear] = x;
            printf("%d pushed successfully\n", x);
        }
        else
        {
            temp->rear = (temp->rear+1)%temp->size;
            temp->arr[temp->rear] = x;
            printf("%d pushed successfully\n", x);
        }
    }
    else
    {
        printf("Queue is Overflow\n");
    }
}

void pop(struct queue *temp)
{
    if (isEmpty(temp))
    {
        printf("Queue is Underflow\n");
    }
    else
    {
        if (temp->front == temp->rear)
        {
            printf("%d poped successfully\n", temp->arr[temp->front]);
            temp->front = temp->rear = -1;
        }
        else
        {
            printf("%d poped successfully\n", temp->arr[temp->front]);
            temp->front = (temp->front+1)%temp->size;
        }
    }
}

int top(struct queue *temp)
{
    if (!isEmpty(temp))
    {
        return temp->arr[temp->front];
    }
    else
    {
        printf("Queue is Underflow\n");
    }
}

void display(struct queue *temp)
{
    if(!isEmpty(temp)){
        printf("Queue Elements: ");
        int start = temp->front, end = temp->rear;
        while(start!=end){
            printf("%d ", temp->arr[start]);
            start = (start+1)%temp->size;
        }
    }else {
        printf("Queue is empty\n");
    }
}
int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    init(q, 5);

    push(q,7);
    push(q,11);
    push(q,18);
    push(q,26);
    push(q,45);
    pop(q);
    push(q,106);
    
    display(q);

    return 0;
}