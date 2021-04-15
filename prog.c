#include <stdio.h>

int fib(int n);

// Code Example from:
//   https://www.programiz.com/c-programming/examples/fibonacci-series
int main() {

    int i, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", fib(i));
    }

    return 0;
}

int fib(int n)
{
   if (n <= 1) return n;
   return fib(n-1) + fib(n-2);
}

