#include "main.h"
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *positive_or_negative : chevk positive or negative int
 *@i: the value we checked
 * Return: Always 0 (Success)
*/
void positive_or_negative(int i)
{
if (i > 0)
printf("%i is positive\n", i);

else if (i == 0)
printf("%i is zero\n", i);

else
printf("%i is negative\n", i);

}
