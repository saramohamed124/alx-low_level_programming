#include "main.h"
/**
 * print_most_numbers -  prints the numbers new line, except 2and 4
 * Return: always succes
 */
void print_most_numbers(void)
{
int o;
for (o = 0; o <= 9; o++)
{
if (o != 2 && o != 4)
{
_putchar(o + 48);
}
}
_putchar('\n');
}
