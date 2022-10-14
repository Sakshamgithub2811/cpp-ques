// 3. Write a program to check whether a given number is there in the Fibonacci series or not.
#include <stdio.h>
int main()
{
    int i, a = -1, b = 1, c, n;
    printf("Enter the number:");
    scanf("%d", &n);
    while (1)
    {
        c = a + b;
        if (n == c)
        {
            printf("fibonaci:");
            break;
        }
        if (c > n)
        {
            printf("not fibonaci:");
            break;
        }
        a = b;
        b = c;
    }

    return 0;
}