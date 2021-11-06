#include <stdio.h>

int main ()
{
     int size, counter, counter_a = 0, negative = 0, i;
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
         if(array[i]<0)
         {
             negative++;
         }
     }

    printf("Total negative numbers in the array: %d\n", negative);
}



