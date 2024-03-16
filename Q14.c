#include <stdio.h>
#include <stdbool.h>

bool findValue(int arr[], int x)
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == x)
        {
            printf("Value found at index %d\n", i);
            return 1;
        }
    }

    return 0;
}

int main()
{
    int arr[10];
    printf("Enter 10 array elements: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    int x;
    printf("Enter a value you want to find: ");
    scanf("%d", &x);

    if(!findValue(arr,x))
    printf("value not found\n");

    return 0;
}