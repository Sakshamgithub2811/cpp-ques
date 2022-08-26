//Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int n,r;
    printf("enter the number:");
    scanf("%d",&n);
    r=n/10;
    printf("number without last digit:%d",r);
}
