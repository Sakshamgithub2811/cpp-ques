//8. Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
      int i,a,n,j;
    printf("Enter the number");
    scanf("%d",&a);

    for(n=a+1;n<=a*2;n++){
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                break;
        }
        if(n==i)
          {
              printf("%d",n);
              break;
          }
    }
}
