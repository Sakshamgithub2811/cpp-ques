// 7. Write a program to print all Prime numbers between two given numbers
#include <stdio.h>
int main()
{
    int i, n, a, b, j;
    printf("Enter the small number and large number:");
    scanf("%d%d", &a, &b);
    for (n = a; n <= b; n++)
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
                break;
        }
        if (n == i)
            printf("%d\n", n);
    }
}
