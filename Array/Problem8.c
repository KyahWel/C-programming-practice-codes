#include <stdio.h>

int main ()
{
     int size, counter, counter_a = 0, negative = 0, i;
     printf("Input Size: ");
     scanf("%d", &size);

     int array[size];
     int array_2[size];

     for(counter=0;counter<size;counter++)
     {
         printf("Input Elements: ");
         scanf("%d", &array[counter]);
     }

     for(i=0;i<size;i++)
     {
         array_2[i] = array[i];
     }

    printf("Array 1: ");
     for(i=0;i<size;i++)
     {
         printf("%d ", array[i]);
     }
    printf("\nArray 2: ");

    for(i=0;i<size;i++)
     {
         printf("%d ", array_2[i]);
     }
}



