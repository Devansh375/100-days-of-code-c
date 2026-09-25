#include <stdio.h>
#include <math.h>
int main()
{
float principal, rate, time;
float si, ci;

printf("Enter principal amount: ");
scanf("%f",&principal);

printf("Enter the rate of interest: ");
scanf("%f",&rate);

printf("Enter the time in years: ");
scanf("%f", &time);

si = (principal * rate * time) / 100;

int a,i;
a = principal;

for (i = 1; i <= time; i++)
{a = a * (1 + rate / 100);}

ci = a - principal;

printf("\nSimple Interest = %f", si);
printf("\nCompound Interest = %f", ci);

return 0;
}
