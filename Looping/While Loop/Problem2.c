#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,a,b,c,d;
    a=0;
    b=0;
    c=0;
    d=0;
    char letter = 'A';
    printf("Input number of rows: ");
    scanf("%d", &rows);
    while(a<rows)
    {
        while (b<rows-a)
        {
            printf(" ");
            b++;
        }
        while (c<=a)
        {
            printf("%c", letter);
            letter++;
            c++;
        }
        letter--;
        while (d>0)
        {
            letter--;
            printf("%c", letter);
            d--;
        }
        letter = 'A';
        d = a+1;
        b = 0;
        c = 0;
        a++;
        printf("\n");
    }
}
