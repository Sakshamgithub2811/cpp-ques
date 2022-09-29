//Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int Check(int);
int main()
{
    int n,check;
    printf("Enter the number :");
    scanf("%d",&n);
    check=Check(n);
    printf("%d",check);
    return 0;
}
int Check(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
