#include<stdio.h>

int fib(int n) {
    if(n <= 1) return n;
    return fib(n-1)+fib(n-2);
}

void printFib(int n) {
    printf("Fibonacci sequence: ");
    for(int i=0; i<n;  i++) {
        printf("%d ", fib(i));
    }
}

int main()
{
    printFib(13);
    return 0;
}