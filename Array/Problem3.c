#include <stdio.h>

int main ()
{
     int size, counter, counter_a = 0, sum = 0;
     printf("Input Size: ");
     scanf("%d", &size);

     int array[size];

     for(counter=0;counter<size;counter++)
     {
         printf("Input Elements: ");
         scanf("%d", &array[counter]);
     }
    printf("Output: ");
    while(counter_a < size)
        {
            sum += array[counter_a];
            counter_a++;
        }
    printf("Sum of all elements: %d", sum);

}

