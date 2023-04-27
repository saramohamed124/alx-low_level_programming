#include <stdio.h>
#include <math.h>
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: always succes
 */
int main(void)
{
long x, maxf;
long number = 612852475143;
double square = sqrt(number);
for (x = 1; x <= square; x++)
{
if (number % x == 0)
{
maxf = number / x;
}
}
printf("%ld\n", maxf);
return (0);
}
