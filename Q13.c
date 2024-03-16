#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node * insert(struct Node *root, int target)
{
    if (!root){
        struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
        temp->data = target;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }

    if (target < root->data)
        root->left = insert(root->left, target);
    else
        root->right = insert(root->right, target);

    return root;
}

void in_order(struct Node *root)
{
    if (!root)
        return;

    in_order(root->left);
    printf("%d ", root->data);
    in_order(root->right);
}

int main()
{
    struct Node *root = (struct Node *)malloc(sizeof(struct Node));
    root = NULL;

    int arr[] = {6, 3, 17, 5, 18, 2, 1, 20, 14};
    for (int i = 0; i < 10; i++)
        root = insert(root, arr[i]);

    in_order(root);

    return 0;
}