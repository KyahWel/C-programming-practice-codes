#include <stdio.h>

int main() {

    int size, a,b;

    printf("Input the number of elements to store in array: ");
    scanf("%d", &size);
    int array[size];
    int* p = array;

    printf("Input %d number of elements in the array:\n", size);
    for(a = 0; a < size; a++) {
        printf("element %d: ", a);
        scanf("%d", &array[a]);
    }

    printf("The elements you entered are:\n");
    for(b = 0; b < size; b++) {
        printf("element %d: %d\n", b, *(p+b));
    }

}
