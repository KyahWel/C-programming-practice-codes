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

    switch(a==b && b ==c)
    {
        case (1):
            printf("Triangle is equilateral");
        break;
    }
    switch((a==b && b!=c) || (a==c && c!=b) || (b==c && c!=a))
    {
        case (1):
            printf("Triange is isosceles");
        break;
    }
    switch(a!=b && b!=c && a!=c)
    {
        case (1):
            printf("Triange is scalene");
        break;
    }
}

