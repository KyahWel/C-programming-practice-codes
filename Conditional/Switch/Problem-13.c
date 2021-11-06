#include <stdio.h>
#include <math.h>

int main()
{
int cost, selling;

printf("Input Cost Price: ");
scanf("%d", &cost);
printf("Input Selling Price: ");
scanf("%d", &selling);

switch( selling-cost>0)
{
case(1):
    printf("Profit:%d", selling - cost);
    break;
default:
    printf("loss:%d", cost - selling);
    break;
}
}
