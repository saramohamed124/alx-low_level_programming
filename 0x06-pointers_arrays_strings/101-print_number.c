#include <stdio.h>
#include "main.h"
/**
 * print_number -  concatenates two strings
 * @n : it is value
 * Return: dest
 */
void print_number(int n)
{
unsigned int us;
if (n < 0)
{
putchar('-');
us = -n;
}
if (us / 10 != 0)
{
print_number(us / 10);
}
putchar((us % 10) + '0');
}
