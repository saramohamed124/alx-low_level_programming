#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: always succes
 */
void more_numbers(void)
{
int p, i;
for (i = 0; i <= 10; i++)
{
for (p = 0; p <= 14; p++)
{
if (p > 9){
_putchar((p / 10) + 48);
}
_putchar((p % 10) + 48);
}
_putchar('\n');
}
}
