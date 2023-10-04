#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    float x1,x2,sq;
    printf("Enter your coefficients: ");
    scanf("%d,%d,%d", &a, &b, &c);
// creating the equation from the coefficients
    //1. creating sign a
    switch (a) {
        case 1: printf("x^2"); break;
        case 0: break;
        case -1: printf("-x^2"); break;
        default: printf("%dx^2",a); break;
    }
    //2. + sign between a and b
    if (a!=0 && b>0) printf("+");
    switch(b){
        case 1: printf("x"); break;
        case 0: break;
        case -1: printf("-x"); break;
        default: printf("%dx",b); break;
        }
    //3. + sign between b and c
    if ((a!=0 || b!=0) && c>0) printf("+");
    switch(c){
        case 0: break;
        default: printf("%d",c); break;
    }
    printf(" = 0\n");
    sq = b*b-4*a*c;

    //calculate to find the root of equation

    if (a==0){
        if (b==0){
            if(c==0){
                printf("There is no equation.");
            }
            else{
                printf("There is no equation.");
            }
        }
        else{
            if(c==0){
                printf("x = 0");
            }
            else{
                printf("x = %.2f", -(float)c/b);
            }
        }
    }
    else{
        if(b==0){
            if(c==0){
                printf("x = 0");
            }
            else{
                x1 = (-b+sqrt(sq))/(2*a);
                x2 = (-b-sqrt(sq))/(2*a);
                printf("x1 = %.2f\n", x1);
                printf("x2 = %.2f\n", x2);
            }
        }
        else{
                if(sq>=0){
                    x1 = (-b+sqrt(sq))/(2*a);
                    x2 = (-b-sqrt(sq))/(2*a);
                    printf("x1 = %.2f\n", x1);
                    printf("x2 = %.2f\n", x2);
                }
                else{
                    printf("no solution\n");
                }

        }
    }

}
