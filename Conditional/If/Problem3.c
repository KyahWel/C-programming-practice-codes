#include<stdio.h>
int main()

{
    int no;
    printf("Input Number: ");
    scanf("%d", &no);
    if (no == 0)
        printf("%d is zero", no);
    if (no>0)
        printf("%d is positive", no);
    if (no<0)
        printf("%d is negative", no);
}
