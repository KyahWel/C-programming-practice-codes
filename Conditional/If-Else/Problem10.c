#include<stdio.h>
int main()

{
    int a,b,c;
    printf("Input first side: ");
    scanf("%d", &a);
    printf("Input second side: ");
    scanf("%d", &b);
    printf("Input third side: ");
    scanf("%d", &c);
    if (a+b > c)
    {
        if (a+c>b)
        {
            if (b+c>a)
                printf("Triangle is valid");
        }
    }
    else
        printf("Triangle is invalid");
}
