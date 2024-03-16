#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createList(int arr[], int index, int size)
{
    if (index == size)
        return NULL;

    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = arr[index];
    temp->next = createList(arr, index + 1, size);

    return temp;
}

void insert(struct Node *head, int value) {

}

void traverseList(struct Node *temp)
{
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    struct Node *head = NULL;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    head = createList(arr, 0, 7);
    traverseList(head);

    return 0;
}