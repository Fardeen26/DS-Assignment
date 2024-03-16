#include<stdio.h>

int main()
{
    int arr[] = {1,2,6,7,4,2,3,5,1,3};
    int temp[10] = {0};

    for(int i=0; i<10; i++)
    temp[arr[i]]++;

    printf("Duplicate elements: ");
    for(int i=0; i<10; i++){
        if(temp[i]>1){
            printf("%d ", i);
        }
    }

    return 0;
}