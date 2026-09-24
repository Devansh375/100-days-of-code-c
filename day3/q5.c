#include<stdio.h>
int main()
{
printf("Type length (in-feet) and press enter \n");
int lnth;
scanf("%d",&lnth);
int cm = lnth * 30.48;
printf("length (in-cm) = %d", cm);
return 0;
}
