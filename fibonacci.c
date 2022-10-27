#include <stdio.h>

// 0 1 1 2 3 5 8 13 21 .....
/*
    f(4) = f(3) + f(2)
    f(3) = f(2) + f(1)
    f(2) = f(1) + f(0)
 */

int fibonacci(int n);

int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    printf("%dth of fibonacci is: %d", x, fibonacci(x));
    return 0;
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}