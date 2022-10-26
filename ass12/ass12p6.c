//6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
int printEvenRev(int);
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    n=n*2;
    printEvenRev(n);
    return 0;
}
int printEvenRev(int n)
{
   
    if(n<=0)
    return 0;
    else
    { 
        printf("%d",n);
        printEvenRev(n-2);
        
    }
    
}


