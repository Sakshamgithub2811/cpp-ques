// 6. Write a program to print all Prime numbers under 100
#include <stdio.h>
int main()
{

    int i, n;
    for (n = 1; n <= 100; n++)
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0) // or kise se divide na ho auske condition hai yeh ..
                break;
        }
        if (n == i)
            printf("%d\n", n);
    }
}
