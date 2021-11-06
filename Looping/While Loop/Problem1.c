#include <stdio.h>
#include <stdlib.h>


int main()
{
    int count = 100;
    int sum = 0;
    printf("Numbers between 100 & 200, divisible by 9:\n ");
    while(count<=200)
    {
        if (count%9==0)
        {
            printf("%d ", count);
            sum+=count;
        }
        count++;
    }
    printf("\nSum: %d", sum);
}
