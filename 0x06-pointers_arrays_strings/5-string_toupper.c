#include "main.h"
/**
 * string_toupper -  concatenates two strings
 * @str : it is value
 * Return: dest
 */
char *string_toupper(char *str)
{
int p = 0;
while (str[p])
{
if (str[p] >= 'a' && str[p] <= 'z')
{
str[p] -= 32;
}
p++;
}
return (str);
}
