// 9. Write a function to check whether a given number contains a given digit or not.(TSRS)
#include <stdio.h>
int check(int, int);
int main()
{
    int number, digit, R;
    printf("Enter the number: number and digit");
    scanf("%d %d", &number, &digit);
    R = check(number, digit);
    if (R == 1)
        printf("number is match:");
    else
        printf("not match:");
    return 0;
}
int check(int number, int digit)
{
    int lastdigit, newnumber;

    while (number > 0)
    {
        lastdigit = number % 10;
        newnumber = number / 10;
        if (lastdigit == digit)
            return 1;
        number = newnumber;
    }
    return 0;
}
