#include <stdio.h>

int main ()
{
     int size, counter, counter_a = 0, odd = 0, even = 0, i;
     printf("Input Size: ");
     scanf("%d", &size);

     int array[size];

     for(counter=0;counter<size;counter++)
     {
         printf("Input Elements: ");
         scanf("%d", &array[counter]);
     }

     for(i=0;i<size;i++)
     {
         if(array[i]%2 == 0)
         {
             even++;
         }
         else
         {
             odd++;
         }
     }

    printf("Total even numbers in the array: %d\n", even);
    printf("Total odd numbers in the array: %d", odd);
}


