#include<stdio.h>
int main()

{
    int num1,num2;
    printf("Input Num1: ");
    scanf("%d", &num1);
    printf("Input Num2: ");
    scanf("%d", &num2);

    if(num1>num2)
    {
        printf("Maximum = %d", num1);
        printf("Minimum = %d", num2);
    }


    if(num1<num2)
    {
        printf("Maximum = %d\n", num2);
        printf("Minimum = %d", num1);
    }
}
