#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int binary, number;
    int bnum=0;
    int a=0;
    printf("Enter Binary: ");
    scanf("%d",&binary);
    number = binary;
    while (binary>0)
    {
        if (binary % 10 == 1)
        {
            bnum += (pow(2,a));
            a++;
        }
        else
            a++;

        binary /=10;
    }
    printf("The decimal of %d is %d", number, bnum);
}
