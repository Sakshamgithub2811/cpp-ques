// Write a program to make the last digit of a number stored in a variable as zero.(Example - if x=2345 then make it x=2340)
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    n = n / 10;
    n = n * 10;
    printf(" Numbers is :%d", n);
    return 0;
}
