#include <stdio.h>

int main ()
{
     int size, counter, counter_a = 0, position, new_number,i;
     printf("Input Size: ");
     scanf("%d", &size);
     int array[size];
     for(counter=0;counter<size;counter++)
     {
         printf("Input Elements: ");
         scanf("%d", &array[counter]);
     }
     printf("Enter element to insert: ");
     scanf("%d", &new_number);
     printf("Enter position where to insert: ");
     scanf("%d", &position);
     size+=1;
     for(i=size;i>=position;i--)
     {
         array[i]=array[i-1];
     }
     array[position-1]=new_number;
     printf("Elements of array are: ");
     for(i=0;i<size;i++)
     {
         printf("%d ", array[i]);
     }
}



