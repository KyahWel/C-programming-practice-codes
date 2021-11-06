#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, n;
    int num = 1;
    int sum = 0;
    printf("Enter terms: ");
    scanf("%d", &number);
    printf("The odd numbers are: ");
    for(n=0;n<number;n++)
    {
        printf("%d ", num);
        sum+=num;
        num+=2;
    }
    printf("\nSum: %d", sum);
}
