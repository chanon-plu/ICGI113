#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float a,b,c,x1,x2;
    scanf("%f,%f,%f",&a,&b,&c);
    x1 = (-b+sqrt((pow(b,2)-(4*a*c))))/(2*a);
    x2 = (-b-sqrt((pow(b,2)-(4*a*c))))/(2*a);

    printf("x1 = %.1f\n", x1);
    printf("x2= %.1f", x2);


}
