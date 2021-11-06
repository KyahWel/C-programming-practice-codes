#include<stdio.h>
int main()

{
    int first, second, third, sum;
    printf("Input first angle: ");
    scanf("%d", &first);
    printf("Input second angle: ");
    scanf("%d", &second);
    printf("Input third angle: ");
    scanf("%d", &third);
    sum = first+second+third;
    if(sum==180)
        printf("Triangle is valid");
    else
        printf("Triangle is not valid");
}
