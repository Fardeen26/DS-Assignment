#include <stdio.h>

int partition(int arr[], int start, int end)
{
    int pos = start;

    // arrenging the elements till piovot element
    for (int i = start; i <= end; i++)
    {
        if (arr[i] <= arr[end])
        {
            int temp = arr[pos];
            arr[pos] = arr[i];
            arr[i] = temp;
            pos++;
        }
    }

    return pos - 1;
}

void quickSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    // Finding an pivot element
    int pivot = partition(arr, start, end);
    quickSort(arr, start, pivot - 1); // Left Side
    quickSort(arr, pivot + 1, end);   // Right Side
}

int main()
{
    int arr[] = {2, 5, 3, 9, 7, 8, 4, 1, 2, 6, 9};
    quickSort(arr, 0, 11);

    printf("Sorted array: ");
    for (int i = 0; i < 11; i++)
        printf("%d ", arr[i]);
}