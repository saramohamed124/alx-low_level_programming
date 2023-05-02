#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @str : the string to print
 *  Return : 0 always success
 */
void print_rev(char *str)
{
int s = 0;
while (str[s] != 0)
{
s++;
}
for (s -= 1; s >= 0; s--)
{
putchar(str[s]);
}
putchar('\n');
}
