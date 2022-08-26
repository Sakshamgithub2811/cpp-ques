//Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{

    int a,u;
    printf("Enter the number:");
    scanf("%d",&a);
    u=a%10;
    printf("unit digit of a given number is %d",u);
    return 0;


}
