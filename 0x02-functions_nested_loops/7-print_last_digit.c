#include "main.h"
#include <stdio.h>
/**
* print_last_digit - Computes the absolute value of an integer.
 * @n: The character to be checked
 * Return: 1 for letter, lowercase and
 uppercase characters and 0 for else
 */
int print_last_digit(int n)
{
int last_digit;
if (last_digit < 0)
{
last_digit = -1 * (n % 10);
}
else
{
last_digit = n % 10;
}
_putchar(last_digit + 48);
return (last_digit);
}
