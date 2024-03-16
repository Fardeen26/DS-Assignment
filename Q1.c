#include<stdio.h>
int main()
{
    int first = 0, second = 1, range, val=0;
    printf("Enter range: ");
    scanf("%d", &range);
    printf("0 ");

    while(val<=range) {
        val = first+second;
        if(val<range)
        printf("%d ", val);

        first = second;
        second = val;
    }

    return 0;
}