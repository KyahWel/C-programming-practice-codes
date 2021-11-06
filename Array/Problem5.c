#include <stdio.h>

int main ()
{
     int size, counter, counter_a = 0, highest = 0, second = 0, i, position;
     printf("Input Size: ");
     scanf("%d", &size);

     int array[size];

     for(counter=0;counter<size;counter++)
     {
         printf("Input Elements: ");
         scanf("%d", &array[counter]);
     }

    ;
  for(i=0;i<counter;i++)
  {
      if(highest<array[i])
	  {
           highest=array[i];
           position = i;
      }
  }

  for(i=0;i<counter;i++)
  {
     if(i==position)
        {
          i++;
		  i--;
        }
      else
        {
          if(second<array[i])
	     {
               second=array[i];
             }
        }
  }
  printf("The Second largest element is :  %d ", second);
}

