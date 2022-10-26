//3. Write a recursive function to print first N odd natural numbers
#include<stdio.h>
int printOdd(int);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    n=n*2;
    printOdd(n);
    return(0);
}
int printOdd(int n)
{   if(n%2==0)
    n--;
    if(n<=0)
      return 1;
    else
    {
        printOdd(n-2);
        printf("%d\n",n);
    }
}

