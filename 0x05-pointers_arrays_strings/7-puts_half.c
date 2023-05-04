#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * puts_half - prints a string in reverse
 * @str : the string to print
 *  Return : 0 always success
 */
void puts_half(char *str)
{
int y = 0;
int k;
while (str[y] != '\0')
{
y++;
}
if (y % 2 == 1)
{
k = (y - 1) / 2;
k += 1;
}
else
{
k = y / 2;
}
for (; k < y; k++)
{
putchar(str[k]);
}
putchar('\n');
}
