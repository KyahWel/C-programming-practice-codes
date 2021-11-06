#include <stdio.h>
#include <stdlib.h>

int main()
{
    int binary, number;
    int bnum=0;
    int a=0;
    printf("Enter Binary: ");
    scanf("%d",&binary);
    number = binary;
    do
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
    while (binary>0);
    printf("The decimal of %d is %d", number, bnum);
}
