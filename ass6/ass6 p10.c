// 10. Write a program to reverse a given number
#include <stdio.h>
int main()
{

    int n, l, r = 0;
    printf("Enter the number");
    scanf("%d", &n);
    while (n > 0)
    {
        l = n % 10;
        r = r * 10 + l;
        n = n / 10;
    }
    printf("%d", r);
}
