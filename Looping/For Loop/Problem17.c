#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, a,b,c;
    int d = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (a=0;a<rows;a++)
    {
        for(b=0; b<rows-a; b++)
        {
            printf(" ");
        }

        for(c=0;c<=a;c++)
        {
            printf("%d ", d);
            d++;
        }
        printf("\n");
    }
}

