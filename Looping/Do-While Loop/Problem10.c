#include <stdio.h>
#include <stdlib.h>

int main()
{
   int count =1;
   int digit,cube;
   printf("Input number of terms: ");
   scanf("%d", &digit);
   do
   {
       cube = count*count*count;
       printf("Number is: %d and cube of %d is: %d\n",count, count, cube);
       count++;
   }
   while(count<=digit);

}
