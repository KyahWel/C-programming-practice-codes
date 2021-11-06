#include <stdio.h>
#include <math.h>
int main()
{
float salary, hra, da, gs;
printf("Input Salary: ");
scanf("%f", &salary);

switch(salary >= 20001)
{
case(1):
    {
        hra = salary * .30;
        da = salary * .95;
    }
}
switch(salary >=10001 && salary <= 20000)
{
case(1):
    {
       hra = salary * .25;
        da = salary * .90;
    }
}
    switch(salary <= 10000)
{
case(1):
    {
       hra = salary * .20;
        da = salary * .80;
    }
}
gs = hra + da + salary;
printf("Gross Profit = %.2f", gs);
}
