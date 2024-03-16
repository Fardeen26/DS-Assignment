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
    return temp->rear == temp->size - 1; // (rear+1)%size == front for circular
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
            temp->rear++; // (rear+1)%size
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
            temp->front++; // (front+1)%size
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
    if (!isEmpty(temp))
    {
        printf("Queue Elements: ");
        for (int i = temp->front; i <= temp->rear; i++)
            printf("%d ", temp->arr[i]);
        printf("\n");
    }
    else
    {
        printf("Queue is Empty\n");
    }
}
int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    init(q, 5);
  
    push(q, 7);
    push(q, 18);
    push(q, 26);
    push(q, 45);
    push(q, 99);
    push(q, 666);
    display(q);
    printf("Empty: %d\n", isEmpty(q));
    printf("Full: %d\n", isFull(q));
    pop(q);
    pop(q);
    pop(q);
    pop(q);
    pop(q);
    pop(q);
    display(q);
  

    return 0;
}