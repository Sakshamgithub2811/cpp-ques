// Write a program to check whether a given number is an even number or an odd number without using % operator.
#include <stdio.h>
int main()
{
    float n, r;
    printf("Enter the number :");
    scanf("%d", &n);
    r = n / 2;
    r = r * 2;
    if (n == r)
    {
        printf("Number is even :");
    }
    else
    {
        printf("Number is odd :");
    }
    return 0;
}
