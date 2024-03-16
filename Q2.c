#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[7];
    printf("Enter array elements: ");
    for(int i=0; i<7; i++) {
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN, min = INT_MAX, sum=0;


    for(int i=0; i<7; i++) {
        if(arr[i] > max) 
        max = arr[i];
        if(arr[i] < min)
        min = arr[i];
        sum+=arr[i];
    }

    printf("max: %d, min: %d, sum: %d", max, min, sum);
    return 0;
}