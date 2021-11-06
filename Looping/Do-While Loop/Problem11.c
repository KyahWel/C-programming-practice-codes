#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 1;
    int number;
    printf("Input the number(Table to be calculated): ");
    scanf("%d", &number);
    do
    {
        printf("%d x %d = %d\n", number, count, number*count);
        count++;
    }
    while(count<=10);
}
