#include<stdio.h>
int main()
{
printf("Hey user!, type one of the numbers u want arithmatic operations on, and press [enter] \n");
int x;
scanf("%d",&x);
printf("type the other number you want to add and press [enter] \n");
int y;
scanf("%d",&y);
int sum = x+y;
printf("\n the sum: %d",sum);
int difference = x-y;
printf("\n the difference: %d",difference);
int product = x*y;
printf("\n the product: %d",product);
int quotient = x/y;
printf("\n the quotient: %d",quotient);
int remainder = x%y;
printf("\n the remainder: %d",remainder);
return 0;
}
