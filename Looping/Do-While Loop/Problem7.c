#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c, hcf,lcm;
    printf("Enter 1st digit: ");
    scanf("%d", &a);
    printf("Enter 2nd digit: ");
    scanf("%d", &b);
    c = 1 ;
    do
    {
        if(a%c==0 && b%c==0)
        {
            hcf = c;
        }
        c++;
    }
    while(c<=a || c<=b);
    lcm = (a*b)/hcf;
    printf("LCM is %d", lcm);
}
