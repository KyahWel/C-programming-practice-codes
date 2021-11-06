#include <stdio.h>
#include <math.h>
int main()
{
int a, b, c;
float root1, root2, discriminant;

printf("Input a: ");
scanf("%d", &a);
printf("Input b: ");
scanf("%d", &b);
printf("Input c: ");
scanf("%d", &c);

root1 = (-b+(sqrt((b*b)-(4*a*c))))/(2*a);
root2 = (-b-(sqrt((b*b)-(4*a*c))))/(2*a);

discriminant = (b*b)-(4*a*c);

switch (discriminant < 0)
{
    case(1):
        {
            printf("root1 = imaginary\n");
            printf("root2 = imaginary");
        }
    break;
    default:
        {
            printf("root1 = %.2f\n", root1);
            printf("root2 = %.2f", root2);
        }
    break;
    }

}
