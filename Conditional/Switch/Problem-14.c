#include <stdio.h>
int main()
{
int a, b ,c ,d, e;
float avg;
printf("enter 5 grades: ");
scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
avg = (a+b+c+d+e)/5;
printf("Percentage = %.2f\n", avg);
switch(avg >= 90)
{
    case(1):
    printf("Grade A");
    break;
}
switch(avg <90 && avg>=80)
{
    case(1):
    printf("Grade B");
    break;
}
switch(avg <80 && avg>=70)
{
    case(1):
    printf("Grade C");
    break;
}
switch(avg <70 && avg>=60)
{
    case(1):
    printf("Grade D");
    break;
}
switch(avg <60 && avg>=50)
{
    case(1):
    printf("Grade E");
    break;
}
switch(avg <40)
{
    case(1):
    printf("Grade F");
    break;
}

}
