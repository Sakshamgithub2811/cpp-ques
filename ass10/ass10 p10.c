/*10. Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)*/
#include<stdio.h>
void primefacto(int ,int );
int main()
{
    int n,i=2;
    printf("Enter the number:");
    scanf("%d",&n);
    primefacto(n,i);
}
void primefacto(int n,int i)
{
    while(i){
    if(n%i==0)
       {

        n=n/i;
        printf("%d\n",i);
        }
    else
        i++;
    }
}
