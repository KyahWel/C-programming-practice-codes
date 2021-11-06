#include<stdio.h>
int main()

{
    int no;
    printf("Input Number: ");
    scanf("%d", &no);
    if(no%2==0)
        printf("%d is even", no);
    if(no%2!=0)
        printf("%d is odd", no);
}
