#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

void init(struct stack *temp, int size)
{
    temp->size = size;
    temp->top = -1;
    temp->arr = (int *)malloc(temp->size * sizeof(int));
    printf("stack created succesfully\n");
}

bool isEmpty(struct stack *temp)
{
    return temp->top == -1;
}

bool isFull(struct stack *temp)
{
    return temp->top == temp->size - 1;
}

void display(struct stack *temp) {
    if(!isEmpty(temp)){
        printf("Stack Elements: ");
        for(int i=temp->top; i>=0; i--)
        printf("%d ", temp->arr[i]);
        printf("\n");
    }else {
        printf("Queue is Empty\n");
    }
}

void push(struct stack *temp, int x)
{
    if (!isFull(temp))
    {
        temp->top++;
        temp->arr[temp->top] = x;
        printf("%d pushed to the stack\n", x);
    }
    else
    {
        printf("Stack Overflow \n");
    }
}

void pop(struct stack *temp) {
    if(!isEmpty(temp)) {
        printf("%d popped from the stack\n", temp->arr[temp->top]);
        temp->top--;
    }else {
        printf("Stack Underflow \n");
    }
}

int top(struct stack *temp) {
    if(!isEmpty(temp))
    return temp->arr[temp->top];
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    init(s, 5);
    push(s, 34);
    push(s, 76);
    push(s, 26);
    push(s, 18);
    push(s, 7);
    push(s, 45);
    display(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    printf("Empty: %d\n", isEmpty(s));
    printf("Full: %d\n", isFull(s));
    printf("Top Element: %d\n", top(s));

    return 0;
}