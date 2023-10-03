#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter your coefficients: ");
    scanf("%d %d %d", &a, &b, &c);
    switch (a) {
        case 1: printf("x^2"); break;
        case 0: break;
        case -1: printf("-x^2"); break;
        default: printf("%dx^2",a); break;
    }
    //2. + sign between a and b
    if(b>0){
        printf("+");
        switch(b){
            case 1: printf("x^2"); break;
            case 0: break;
            case -1: printf("-x^2"); break;
            default: printf("%dx^2",a); break;
        }
    }
    else if (b<0) {
        printf("-");
    }

    //3. term b
    return 0;
}
