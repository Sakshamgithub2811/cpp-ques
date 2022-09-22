//Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int count=0,n;
    printf("Enter the Number:");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        count++;
    }
    printf("%d",count);
    return 0;

}
