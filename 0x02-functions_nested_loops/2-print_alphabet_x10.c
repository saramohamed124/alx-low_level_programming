#include "main.h"
/**
 * print_alphabet_x10 - Make the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
char i;
for (int i = 0; i <= 10; i++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
putchar('\n');
}
}
