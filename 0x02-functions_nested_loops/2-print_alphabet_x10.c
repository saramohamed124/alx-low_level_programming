#include "main.h"
/**
 * print_alphabet_x10 - Make the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
int i = 0;
char u;
while (i < 10)
{
for (u = 'a'; u <= 'z'; u++)
{
_putchar(u);
}
_putchar('\n');
i++;
}
}
