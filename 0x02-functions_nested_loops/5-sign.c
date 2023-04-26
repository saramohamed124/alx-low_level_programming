#include "main.h"
/**
 * print_sign - Checks for zero, more than zero and lower than zero character
 * @n: The character to be checked
 * Return: 1 for letter, lowercase and uppercase characters and 0 for else
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
