#include<stdio.h>
int printRev(int);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printRev(n);
    return 0;
}
int printRev(int n)
{
    if(n==0)
    return 1;
    else
    {
        printf("%d",n);
        printRev(n-1);
    }
}
