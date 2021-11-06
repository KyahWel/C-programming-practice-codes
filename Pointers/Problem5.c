#include <stdio.h>

int add(int* a, int* b) {
    return *a + *b;
}

int main() {

    int n1, n2;
    int* pn1 = &n1;
    int* pn2 = &n2;

    printf("Input the first number: ");
    scanf("%d", &n1);
    printf("Input the second number: ");
    scanf("%d", &n2);

    printf("The sum of the entered number is: %d", add(&n1, &n2));
    return 0;
}

