#include <stdio.h>

int main()
{
    int arr[8];
    printf("Enter array elements: ");
    for (int i = 0; i < 7; i++)
    scanf("%d", &arr[i]);

    int index, val;
    printf("Enter index where you want to insert value: ");
    scanf("%d", &index);

    for(int i=7; i>=index; i--)
    arr[i+1] = arr[i];

    printf("Enter the value you want to insert: ");
    scanf("%d", &val);

    arr[index] = val;

    printf("Array after inserting\n");
    for(int i=0; i<8; i++)
    printf("%d ", arr[i]);

    return 0;
}