#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 1;
    int number, avg;
    int sum = 0;
    do
    {
        printf("Enter Number %d: ", count);
        scanf("%d", &number);
        sum += number;
        count++;
    }
    while(count <= 10);

    printf("The sum of no is: %d\n",sum);
    avg = sum/10;
    printf("Average = %d", avg);
}
