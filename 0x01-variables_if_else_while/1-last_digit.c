#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *if is a f
 * Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int lastDigit = n % 10;
if ( lastDigit < 6 && lastDigit != 0)
printf("Last digit of %i  is %i and is less than 6 and not 0", n , lastDigit);

else if (lastDigit == 0)
printf("Last digit of %i  is %i and is 0", n , lastDigit);

else 
printf("Last digit of %i is %i and is greater than 5", n , lastDigit);

return (0);
}
