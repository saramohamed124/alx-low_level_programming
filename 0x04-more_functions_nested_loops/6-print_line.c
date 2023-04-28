#include "main.h"
#include <stdio.h>
/**
 * print_line - draws a straight line in the terminal.
 * @n:The number will been printed
 * Return: always succes
 */
void print_line(int n)
{
int x;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
_putchar('_');
}
_putchar('\n');
}
}
