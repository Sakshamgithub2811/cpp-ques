//4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
int printOddRev(int);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    n=n*2;
    printOddRev(n);
    return 0;
}
int printOddRev(int n)
{   
    if(n%2==0)
    n--;
    if(n<=0)
    return 1;
    else
    {
     printf("%d",n);
     printOddRev(n-2);
    }
}
