#include "main.h"
/**
 * print_numbers -  prints the numbers, from 0 to 9, followed by a new line
 * Return: always succes
 */
void print_numbers(void)
{
int u;
for (u = 0; u <= 9; u++)
_putchar(u + 48);

_putchar('\n');
}
