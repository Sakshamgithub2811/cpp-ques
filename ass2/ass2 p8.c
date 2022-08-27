/*Write a program to check whether the given number is even or odd using a bitwise
operator.
using & operator.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if ((n&1)==0)
    {
        printf("number is even ");
    }
    else
    {
        printf("number is odd");
    }
    return 0;

}
