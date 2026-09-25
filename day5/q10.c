#include <stdio.h>
int main() 
{
int n, hours, minutes, seconds;

printf("Enter time in seconds: ");
scanf("%d", &n);

hours = n / 3600;
n = n % 3600;

minutes = n / 60;
seconds = n % 60;

printf("Time = %d hours, %d minutes, %d seconds", hours, minutes, seconds);

return 0;
}
