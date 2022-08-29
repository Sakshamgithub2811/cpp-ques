//Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number:");
    scanf("%d",&N);
    if((N>99)&&(N<1000))
    {

        printf("Number is three digit number :");
    }
    else
    {
        printf("Number is not the three digit number:");
    }
    return 0;
}
