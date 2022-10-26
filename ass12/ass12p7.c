//7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
int printSq(int);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printSq(n);
    return 0;
}
int printSq(int n)
{
    if(n<=0)
    return 1;
    else
    {
        printSq(n-1);
        printf("%d",n*n);
    }
}
