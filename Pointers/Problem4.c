#include <stdio.h>
int main()
{
   int fnumber, snumber, *pointer, *spointer, sum;
   printf(" Input the first number : ");
   scanf("%d", &fnumber);
   printf(" Input the second  number : ");
   scanf("%d", &snumber);

   pointer = &fnumber;
   spointer = &snumber;

   sum = *pointer + *spointer;

   printf(" The sum of the entered numbers is : %d\n\n",sum);

}
