//2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float SI(float,float,float);
int main()
{
    float si,p,r,t;
    printf("Enter the principal,rate,time:");
    scanf("%f %f %f",&p,&r,&t);
    si=SI(p,r,t);
    printf("%f",si);
    return 0;

}
float SI(float p,float r,float t)
{

    float si=(p*r*t)/100;
    return si;
}

