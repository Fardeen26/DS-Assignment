#include <stdio.h>
int main()
{
    int first = 0, second = 1, range, val=0, i=0;
    printf("Enter range: ");
    scanf("%d", &range);
    printf("0 1 ");

    while(i<range) {
        val = first+second;
        // if(val<range)
        printf("%d ", val);

        first = second;
        second = val;
        i++;
    }

    return 0;
}