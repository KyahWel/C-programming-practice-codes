#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digit;
    int a,b,c;

    printf("Input Digit: ");
    scanf("%d", &digit);
    b=1;
    c=digit;
    for (a=0;a<digit;a++)
    {
        b*=c;
        c--;
    }
    printf("Factorial of %d is %d",digit,b);
}

