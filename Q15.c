#include <stdio.h>

int binarySearch(int arr[], int x, int size)
{
    int start = 0, end = size - 1, mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return 0;
}

int main()
{
    int arr[10];
    printf("Enter 10 array elements in sorted order: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    int x;
    printf("Enter the value you want to find: ");
    scanf("%d", &x);

    if (binarySearch(arr, x, 10))
        printf("Value found at index %d\n", binarySearch(arr, x, 10));
    else
        printf("Value not found\n");

    return 0;
}