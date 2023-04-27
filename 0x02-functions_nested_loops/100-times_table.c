#include "main.h"
/**
 * times_table - prints the times table of the input
 * starting from
 * @n: The value of timrs table
 */
void times_table(int n)
{
int num, mult, prod;
if (n >= 0 && n <= 15)
{
for (num = 0; num <= n; num++)
{
_putchar(48);
for (mult = 1; mult <= n; mult++)                     {
_putchar(',');
_putchar(' ');
prod = num * mult;
if (prod <= 99)
_putchar(' ');
if (prod <= 9)
_putchar(' ');
if (prod >= 100)
{
_putchar((prod / 100) + 48);
_putchar(((prod / 10)) + 48);
}
else if (prod <= 99 && prod >= 10)
{
_putchar((prod / 10) + 48);
}
_putchar((prod % 10) + 48);
}
_putchar('\n');
}
}
}
