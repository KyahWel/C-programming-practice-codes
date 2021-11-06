#include <stdio.h>

int main() {

    int n1, n2, max;
    int* p1 = &n1;
    int* p2 = &n2;

    printf("Input the first number: ");
    scanf("%d", &n1);
    printf("Input the second number: ");
    scanf("%d", &n2);

    if (*p1 > *p2 )
    {
        max = *p1;
    }
    else
    {
        max = *p2;
    }
    printf("%d is the maximum number.", max);


}
