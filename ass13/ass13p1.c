// 1. Write a recursive function to calculate sum of first N natural numbers
#include <stdio.h>
int sum(int);
int main()
{
    int n, k;
    printf("Enter the number:");
    scanf("%d", &n);
    k = sum(n);
    printf("%d", k);
    return 0;
}
int sum(int n)
{
    int s;
    if (n == 1)
        return 1;
    else
    {
        s = n + sum(n - 1);
        return s;
    }
}