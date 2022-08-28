/*. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349) */
#include <stdio.h>
int main()
{
    int n, r;
    printf("Enter the number :");
    scanf("%d", &n);
    printf("Enter the number to append in number :");
    scanf("%d", &r);
    if ((r < 10) && (r > 0))
    {
        n = n * 10 + r;
        printf("resulting number is %d", n);
        return 0;
    }
    else
    {
        printf("Not in range:");
        return 0;
    }
}
