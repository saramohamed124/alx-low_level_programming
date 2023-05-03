#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str : it is string will be printed
 * Return : 0 always success
 */
void puts2(char *str)
{
int i;
int s = 0;
while (str[s] != '\0')
{
s++;
}
for (i = 0; i < s; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
