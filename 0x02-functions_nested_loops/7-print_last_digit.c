#include "main.h"
#include <stdio.h>
/**
* print_last_digit - print the last digit of int
* @n: The character to be checked
 * Return: n %10 if n < 10 or n % 10 if else
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
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
