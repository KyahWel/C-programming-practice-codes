
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10], elem,sum=0;

    printf("Input array: ");
    for(elem=0; elem<10; elem++)
    {
        scanf("%d", &arr[elem]);
        sum+=arr[elem];
    }

    printf("Sum of all elements: %d", sum);

}
