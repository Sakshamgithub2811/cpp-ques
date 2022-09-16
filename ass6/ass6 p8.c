
// Write a program to check whether a given number is a Prime number or not
#include <stdio.h>
int main()
{

    int i, n;
    printf("Enter the number:");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            break;
    }
    if (n == i)
        printf("prime number");
    else
        printf("Not a prime number:");

    return 0;
}
