#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                swapped = 1;
            }
        }
        if (!swapped)
            break; // Optimization: If no two elements were swapped by inner loop, then the array is already sorted.
    }
}


int main()
{
    int arr[] = {2, 5, 3, 9, 7, 8, 4, 1, 2, 6, 9};
    bubbleSort(arr, 11);

    printf("Sorted array: ");
    for (int i = 0; i < 11; i++)
    printf("%d ", arr[i]);
}