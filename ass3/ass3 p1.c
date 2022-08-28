//Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("number is even :");
    }
    else
    {
        printf("number is odd :");
    }
    return 0;
}
