#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c, hcf;
    printf("Enter 1st digit: ");
    scanf("%d", &a);
    printf("Enter 2nd digit: ");
    scanf("%d", &b);
    c = 1 ;
    while(c<=a || c<=b)
    {
        if(a%c==0 && b%c==0)
        {
            hcf = c;
        }
        c++;
    }
    printf("HCF is %d", hcf);
}
