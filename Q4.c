#include <stdio.h>

int main()
{
    int arr[7];
    printf("Enter array elements: ");
    for (int i = 0; i < 7; i++)
    scanf("%d", &arr[i]);

    int index;
    printf("Enter index where you want to delete value: ");
    scanf("%d", &index);

    for(int i=index; i<7; i++)
    arr[i] = arr[i+1];

    printf("Array after deleting value\n");
    for(int i=0; i<6; i++)
    printf("%d ", arr[i]);

    return 0;
}