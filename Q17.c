#include <stdio.h>


void merge(int arr[], int start, int mid, int end) {
    int size = end-start+1;
    int temp[size];
    int left = start, right = mid+1, index = 0;

    while(left<=mid && right<=end) {
        if(arr[left] <= arr[right])
        temp[index++] = arr[left++];
        else
        temp[index++] = arr[right++];
    }

    while(left<=mid){
        temp[index++] = arr[left++];
    }

    while(right<=end) {
        temp[index++] = arr[right++];
    }

    index = 0;
    while(start<=end){
        arr[start++] = temp[index++];
    }
}

void mergeSort(int arr[], int start, int end) {
    if(start == end) return;

    int mid = start+(end-start)/2;
    mergeSort(arr, start, mid); // left side
    mergeSort(arr, mid+1, end); // right side

    merge(arr, start, mid, end); // merging array
}

int main()
{
    int arr[] = {2, 5, 3, 9, 7, 8, 4, 1, 2, 6, 9};
    mergeSort(arr, 0, 11);

    printf("Sorted array: ");
    for (int i = 0; i < 11; i++)
        printf("%d ", arr[i]);
}