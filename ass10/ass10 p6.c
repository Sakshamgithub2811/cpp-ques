// 6. Write a function to calculate the factorial of a number. (TSRS)
#include <stdio.h>
int Fact(int);
int main()
{

    int n, fact;
    printf("Enter the Number");
    scanf("%d", &n);
    fact = Fact(n);
    printf("%d", fact);
    return 0;
}
int Fact(int n)
{
    int i, f = 1;
    for (i = n; i >= 1; i--)
    {
        f = f * i;
    }
    return f;
}
