#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 1;
    int count_a = 1;
    int number;
    printf("Input up to the table number starting from 1: ");
    scanf("%d", &number);
    do
    {
        while(count<=number)
        {
            printf("%d x %d = %d\t",count,count_a , count*count_a);
            count++;
        }
            count=1;
            printf("\n");
            count_a++;
    }
    while(count_a<=10);
}
