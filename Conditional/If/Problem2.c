#include<stdio.h>
int main()

{
    int num1, num2, num3;
    printf("Input Num1: ");
    scanf("%d", &num1);
    printf("Input Num2: ");
    scanf("%d", &num2);
    printf("Input Num3: ");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        if(num1>num3)
        {
            printf("Maximum = %d\n", num1);
            printf("Minimum = %d", num3);
        }
        if (num1 < num3)
        {
            printf("Maximum = %d\n", num3);
            printf("Minimum = %d", num2);
        }
    }
    if (num2>num1)
    {
        if(num2>num3)
        {
            printf("Maximum = %d\n", num2);
            printf("Minimum = %d", num1);
        }
        if (num2<num3)
        {
            printf("Maximum = %d\n", num3);
            printf("Minimum = %d", num1);
        }
    }


}
