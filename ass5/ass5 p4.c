//Write a program to print the first N odd natural numbers.
#include<stdio.h>
int main()
{
    int N,i=1;
    printf("Enter the Number:");
    scanf("%d",&N);
    while(i<2*N)
    {
        printf("%d\n",i);
        i=i+2;
    }
    return 0;

}
