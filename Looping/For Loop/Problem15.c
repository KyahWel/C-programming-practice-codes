#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,a,b;
    int num=1;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    for(a=1;a<=row;a++)
    {
        for(b=0;b<a;b++)
        {
            printf("%d", num);
            num++;
        }
        num=1;
        printf("\n");
    }
}
