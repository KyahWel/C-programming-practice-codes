#include <stdio.h>

int main ()
{
     int size, counter, counter_a = 0, position, deleted ,i;
     printf("Input Size: ");
     scanf("%d", &size);
     int array[size];
     for(counter=0;counter<size;counter++)
     {
         printf("Input Elements: ");
         scanf("%d", &array[counter]);
     }
     printf("Enter position to be deleted: ");
     scanf("%d", &deleted);
     for(i=0;i<size;i++)
     {
         if (i>=deleted-1)
         {
            array[i] = array [i+1];
         }
     }
     size-=1;
     printf("Elements of array are: ");
     for(i=0;i<size;i++)
     {
         printf("%d ", array[i]);
     }
}



