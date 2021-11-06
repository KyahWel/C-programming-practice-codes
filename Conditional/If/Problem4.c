#include<stdio.h>
int main()

{
    int no;
    printf("Input Number: ");
    scanf("%d", &no);
    if(no%5==0 && no%11==0)
        printf("%d is divisible by 5 and 11",no);
    if (no%5!=0 && no%11!=0)
        printf("%d is not divisible by 5 and 11",no);
}
