#include<stdio.h>
int main()

{
 int amount, fiveH, oneH, fifty, twenty, ten, five, two, one;
 printf("Enter Amount: ");
 scanf("%d", &amount);
 if(amount>500)
 {
     fiveH = amount/500;
     oneH = (amount%500)/100;
     fifty =(amount%100)/50;
     twenty = (amount%50)/20;
     ten = ((amount%50)%20)/10;
     five = (amount%10)/5;
     two = ((amount%10)%5)/2;
     one = ((amount%10)%5)%2;
  }
  else
  {
     fiveH = 0;
     oneH = amount/100;
     fifty =(amount%100)/50;
     twenty = (amount%50)/20;
     ten = ((amount%50)%20)/10;
     five = (amount%10)/5;
     two = ((amount%10)%5)/2;
     one = ((amount%10)%5)%2;
  }
  printf("500 = %d\n", fiveH);
  printf("100 = %d\n", oneH);
  printf("50 = %d\n", fifty);
  printf("20 = %d\n", twenty);
  printf("10 = %d\n", ten);
  printf("5 = %d\n", five);
  printf("2 = %d\n", two);
  printf("1 = %d\n", one);
}

