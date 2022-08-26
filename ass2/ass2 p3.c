//Write a program to swap values of two int variables.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf ("Enter the number to swap the number in variables:a and b:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("swapped values of a=%d and b=%d ",a,b);
}
