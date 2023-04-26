#include "main.h"
/**
 * print_sign - Checks for letter, lowercase and uppercase character
 * @i: The character to be checked
 * Return: 1 for letter, lowercase and uppercase characters and 0 for else
 */
int print_sign(int n)
{
if (n > 48)
{
_putchar('+');
return (1);
}
else if (n == 48)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
