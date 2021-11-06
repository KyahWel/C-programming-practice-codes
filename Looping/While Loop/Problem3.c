#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a = 0;
   int binary, number;
   int pvalue = 1;
   printf("Input Number: ");
   scanf("%d", &binary);
   number = binary;
   while (binary>0)
   {
       a = a + ((binary%2)*pvalue);
       pvalue *= 10;
       binary /= 2;
   }
   printf("The binary of %d is %d", number,a);
}
