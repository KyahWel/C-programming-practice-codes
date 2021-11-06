#include <stdio.h>

int main ()
{
     int size, counter, counter_a = 0, highest, smallest,i;
     printf("Input Size: ");
     scanf("%d", &size);

     int array[size];

     for(counter=0;counter<size;counter++)
     {
         printf("Input Elements: ");
         scanf("%d", &array[counter]);
     }
    highest = array[0];
    smallest = array[0];

    for(i=1; i<size; i++)
    {
        if(array[i]>highest)
        {
            highest = array[i];
        }

        if(array[i]<smallest)
        {
            smallest = array[i];
        }
    }
    printf("Maximum : %d\n", highest);
    printf("Minimum : %d", smallest);
}

