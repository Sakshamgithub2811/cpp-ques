// Write a function to calculate the area of a circle. (TSRS)
#include <stdio.h>
float Area(int);
int main()
{

    float r, A;
    printf("Enter the radius");
    scanf("%f", &r);
    A = Area(r);
    printf("%f", A);
    return 0;
}
float Area(int r)
{

    float a;
    a = 3.14 * r * r;
    return a;
}
