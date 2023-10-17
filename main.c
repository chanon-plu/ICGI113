#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,x=0;
    scanf("%d",&num);
    while(num>0){
        x=num%10;
        num /= 10;
        printf("%d",x);
    }

}

